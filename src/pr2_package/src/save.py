#!/usr/bin/env python

import sys
import copy
import geometry_msgs.msg
from geometry_msgs.msg import PoseStamped
import tf
import roslib
import traceback
import numpy as np
import math
from numpy.linalg import inv
from std_msgs.msg import String
import rospy


def listener_new():
 
 rospy.init_node('listener_new', anonymous=True)
 msg=rospy.wait_for_message('/sd/Pose', PoseStamped)
 print(msg)
 array=np.array([msg.pose.position.x, msg.pose.position.y, msg.pose.position.z, msg.pose.orientation.x, msg.pose.orientation.y, msg.pose.orientation.z, msg.pose.orientation.w])
 np.savetxt('/home/tawfiq/pr2_ws/pose.txt', array)
if __name__=='__main__':
  try:
    listener_new()
  except rospy.ROSInterruptException:
    pass