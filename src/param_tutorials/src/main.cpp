#include <ros/ros.h>
#include <string>
#include <iostream>
using namespace std;

int main(int argc , char** argv)
{
    ros::init(argc,argv,"param_tutorials_");
    ros::NodeHandle nh;

    int param1_,param2_,param3_,param5_;

    //获取参数方法1：通过ros::param::get获取
    bool ifget1=ros::param::get("param1",param1_);
    
    //获取参数方法2：通过nh.getParam获取
    bool ifget2=nh.getParam("param2",param2_);

    //获取参数方法3：通过nh.param获取
    bool ifget3=nh.param("param3",param3_,3);
    bool ifget5=nh.param("/param_demo/param5",param5_,5);//节点内的参数选在前面加上节点名称，否则无法读取参数值
    
    if(ifget1)
        ROS_INFO("Get param1 = %d", param1_);
    else
        ROS_WARN("Didn't retrieve param1");
    
    if(ifget2)
        ROS_INFO("Get param2 = %d", param2_);
    else
        ROS_WARN("Didn't retrieve param2");

    if(ifget3)
        ROS_INFO("Get param1 = %c", param3_);
    else
        ROS_WARN("Didn't retrieve param3");
    
    if(ifget5)
		ROS_INFO("Get param5 = %d", param5_);
	else
		ROS_WARN("Didn't retrieve param5");
}
