#include <ros/ros.h>
#include "pr2_package/PoseSend.h"

// MoveIt!
#include <moveit/planning_scene_monitor/planning_scene_monitor.h>
#include <moveit/move_group_interface/move_group.h>
#include <geometric_shapes/solid_primitive_dims.h>
static const std::string ROBOT_DESCRIPTION="robot_description";




void openGripper(trajectory_msgs::JointTrajectory& posture){
  posture.joint_names.resize(6);
  posture.joint_names[0] = "r_gripper_joint";
  posture.joint_names[1] = "r_gripper_motor_screw_joint";
  posture.joint_names[2] = "r_gripper_l_finger_joint";
  posture.joint_names[3] = "r_gripper_r_finger_joint";
  posture.joint_names[4] = "r_gripper_r_finger_tip_joint";
  posture.joint_names[5] = "r_gripper_l_finger_tip_joint";

  posture.points.resize(1);
  posture.points[0].positions.resize(6);
  posture.points[0].positions[0] = 1;
  posture.points[0].positions[1] = 1.0;
  posture.points[0].positions[2] = 0.477;
  posture.points[0].positions[3] = 0.477;
  posture.points[0].positions[4] = 0.477;
  posture.points[0].positions[5] = 0.477;
}



void pick(moveit::planning_interface::MoveGroup &group)
{
  std::vector<moveit_msgs::Grasp> grasps;
  geometry_msgs::PoseStamped p;
  p.header.frame_id = "odom_combined";
  p.pose.position.x = 0.66;
  p.pose.position.y = -0.4;
  p.pose.position.z = 1.0;
  p.pose.orientation.x = 0.0;
  p.pose.orientation.y = 0.0;
  p.pose.orientation.z = 0.0;
  p.pose.orientation.w = 1.0;
  moveit_msgs::Grasp g;
  g.grasp_pose = p;

  g.pre_grasp_approach.direction.vector.x = 1.0;
  g.pre_grasp_approach.direction.header.frame_id = "r_wrist_roll_link";
  g.pre_grasp_approach.min_distance = 0.2;
  g.pre_grasp_approach.desired_distance = 0.4;

  g.post_grasp_retreat.direction.header.frame_id = "base_footprint";
  g.post_grasp_retreat.direction.vector.z = 1.0;
  g.post_grasp_retreat.min_distance = 0.1;
  g.post_grasp_retreat.desired_distance = 0.25;

  openGripper(g.pre_grasp_posture);


  grasps.push_back(g);
  group.pick("part", grasps);


}




int main(int argc, char **argv)
{
  ros::init (argc, argv, "right_arm_pick_place");
  ros::AsyncSpinner spinner(1);
  spinner.start();
  ros::NodeHandle nh;
  ros::WallDuration(1.0).sleep();
  moveit::planning_interface::MoveGroup group("right_arm");
  group.setPlanningTime(45.0);
  pick(group);
  ros::waitForShutdown();
  return 0;
}
