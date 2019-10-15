#!/usr/bin/env python

import sys
import copy
import rospy
import roscpp
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg
from geometry_msgs.msg import PoseStamped
import tf
import roslib
import traceback
from std_msgs.msg import String
import numpy as np
import tf2_ros
import tf2_geometry_msgs
import math
import time
from pr2_package.srv import *


def Pose_Send_Client():
    
    # msg=rospy.wait_for_message('/sd/Pose', PoseStamped)
    # print("Subscribed",msg.pose)

    # print "============ Waiting for RVIZ..."
    # rospy.sleep(10)



    # print "============ Generating plan 1"


    load =  np.loadtxt('/home/tawfiq/pr2_ws/pose.txt')
    quaternion3 = (load[3], load[4], load[5], load[6])
    euler = tf.transformations.euler_from_quaternion(quaternion3) #, axes='szyx'
    roll=euler[0]
    pitch=euler[1]
    yaw=euler[2]

    C00=math.cos(yaw)*math.cos(pitch)
    C01=math.cos(yaw)*math.sin(pitch)*math.sin(roll) - math.sin(yaw)*math.cos(roll)
    C02=math.cos(yaw)*math.sin(pitch)*math.cos(roll) + math.sin(yaw)*math.sin(roll)
    C03=load[0]
    C10=math.sin(yaw)*math.cos(pitch)
    C11=math.sin(yaw)*math.sin(pitch)*math.sin(roll) + math.cos(yaw)*math.cos(roll)
    C12=math.sin(yaw)*math.sin(pitch)*math.cos(roll) -math.cos(yaw)*math.sin(roll)
    C13=load[1]
    C20= -math.sin(pitch)
    C21=math.cos(pitch)*math.sin(roll)
    C22=math.cos(pitch)*math.cos(roll)
    C23=load[2]
    C30=0
    C31=0
    C32=0
    C33=1

    object_new_mat=np.array([[C00, C01, C02, C03],[C10, C11, C12, C13],[C20, C21, C22, C23],[C30, C31, C32, C33]])
    print("object_new_mat",object_new_mat)
    transformation_mat = np.loadtxt('/home/tawfiq/pr2_ws/transform.txt')
    Final_pose=np.dot(object_new_mat, transformation_mat)
    roll=math.atan2(float(Final_pose[2][1]),float(Final_pose[2][2]))
    pitch=math.atan2(-Final_pose[2][0],float(math.sqrt(Final_pose[2][1]**2 + Final_pose[2][2]**2)))
    yaw=math.atan2(float(Final_pose[1][0]),float(Final_pose[0][0]))
  
    #print("Mine", roll, pitch, yaw)
    quaternion = tf.transformations.quaternion_from_euler(roll, pitch, yaw)

    pose_source = PoseStamped()
    pose_source.header.frame_id = "odom_combined" 
    pose_source.pose.orientation.x = quaternion[0]
    pose_source.pose.orientation.y = quaternion[1]
    pose_source.pose.orientation.z = quaternion[2]
    pose_source.pose.orientation.w = quaternion[3]
    pose_source.pose.position.x = Final_pose[0][3]
    pose_source.pose.position.y = Final_pose[1][3]
    pose_source.pose.position.z = Final_pose[2][3]
    rospy.wait_for_service('Pose_Send')
    try:
      Pose_Send = rospy.ServiceProxy('Pose_Send', PoseSend)
      grasping = Pose_Send(pose_source.pose.position.x, pose_source.pose.position.y, pose_source.pose.position.z, pose_source.pose.orientation.x, pose_source.pose.orientation.y, pose_source.pose.orientation.z, pose_source.pose.orientation.w)
    except rospy.ServiceException, e:
      print "Service call failed: %s"%e



if __name__=='__main__':
    Pose_Send_Client()
