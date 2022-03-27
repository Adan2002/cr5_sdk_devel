/**
 ***********************************************************************************************************************
 *
 * @author ZhangRan
 * @date   2021/08/07
 *
 * <h2><center>&copy; COPYRIGHT 2021 Dobot CORPORATION</center></h2>
 *
 ***********************************************************************************************************************
 */

#include <ros/ros.h>
#include <ros/param.h>
#include <iostream>
#include <commander.h>

int main(int argc, char* argv[])
{
    ros::init(argc, argv, "CR5Robot");

    CR5Commander commander("192.168.5.1");
    std::cout << commander.isConnected() << std::endl;
    commander.init();
    commander.enableRobot();
    commander.clearError();
    commander.enableRobot();

    return 0;
}
