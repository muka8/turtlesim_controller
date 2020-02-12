#ifndef __TURTLESIM_CONTROLLER_H
#define __TURTLESIM_CONTROLLER_H

#include <ros/ros.h>

#include <geometry_msgs/Twist.h>
#include <turtlesim/Pose.h>

class TurtlesimController
{
public:
    TurtlesimController();
    void process();

private:
    // method
    void pose_callback(const turtlesim::PoseConstPtr&);
    geometry_msgs::Twist draw_circle();

    // prameter
    ros::NodeHandle private_nh;
    double hz;

    // member
    ros::NodeHandle nh;
    ros::Publisher cmd_vel_pub;
    ros::Subscriber pose_sub;
    turtlesim::Pose current_pose;
};

#endif // __TURTLESIM_CONTROLLER_HT
