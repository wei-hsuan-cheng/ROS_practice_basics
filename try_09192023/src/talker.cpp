#include "ros/ros.h"
#include "try_09192023/my_msg.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "talker");
  ros::NodeHandle n;
  ros::Publisher chatter_pub = n.advertise<try_09192023::my_msg>("chatter", 1000);
  ros::Rate loop_rate(10);

  int count = 0;
  while (ros::ok())
  {
    try_09192023::my_msg msg;
    msg.id = count;
    msg.title = "hello";
    msg.content = "hellp from c++";

    chatter_pub.publish(msg);
    ros::spinOnce();
    loop_rate.sleep();
    ++count;
  }
  return 0;
}