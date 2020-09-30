# ONR-Grasping
1. save.py (Path: Grasping\src\pr2_package\src\): This file listens to topic published by a vision system and saves the pose of the object in a file named pose.txt.

2. gripper.cpp (Path: Grasping\src\pr2_package\src\): This file starts the ROS service and also performs the grasp based on the pose received by the service.

3. execute_grasp.py (Path: Grasping\src\pr2_package\src\): This file reads the pose.txt file and the transform.txt file and generates the grasp pose based on those files and makes the service call with the grasp pose.

4. gripper_another.cpp (Path: Grasping\src\pr2_ws_new\src\): This file moves the gripper to a hardcoded pose and opens the gripper. 

