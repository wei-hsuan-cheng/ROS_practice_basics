#!/usr/bin/env python

import rospy

rospy.init_node('hello_python_node')

frq = rospy.get_param("/print_frq")

while not rospy.is_shutdown():           
    rospy.loginfo('Hello World')         
    rospy.sleep(frq)                       
