# CMake generated Testfile for 
# Source directory: /home/terry/mr23_ws/src/velodyne/velodyne_pcl
# Build directory: /home/terry/mr23_ws/build/velodyne_pcl
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_velodyne_pcl_roslint_package "/home/terry/mr23_ws/build/velodyne_pcl/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/terry/mr23_ws/build/velodyne_pcl/test_results/velodyne_pcl/roslint-velodyne_pcl.xml" "--working-dir" "/home/terry/mr23_ws/build/velodyne_pcl" "--return-code" "/opt/ros/noetic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/terry/mr23_ws/build/velodyne_pcl/test_results/velodyne_pcl/roslint-velodyne_pcl.xml make roslint_velodyne_pcl")
set_tests_properties(_ctest_velodyne_pcl_roslint_package PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslint/cmake/roslint-extras.cmake;67;catkin_run_tests_target;/home/terry/mr23_ws/src/velodyne/velodyne_pcl/CMakeLists.txt;9;roslint_add_test;/home/terry/mr23_ws/src/velodyne/velodyne_pcl/CMakeLists.txt;0;")
subdirs("gtest")
