
#include "../include/arc_mpc/arc_mpc.hpp"

#include <iostream>
#include <string> 

int SPIN_RATE_MPC=10;

int main(int argc, char **argv)
	{
	// Create the high-level controller node.
	ros::init(argc, argv, "arc_mpc");
	ros::NodeHandle n;
	n.getParam("/general/SPIN_RATE_MPC",SPIN_RATE_MPC);
  	std::string MODE=*(argv + 2);
	std::string PATH_NAME = *(argv + 1);
	// Create a PP-controller object.
	MPC M(&n,PATH_NAME,MODE);
	ros::Rate r(SPIN_RATE_MPC); // 10 hz
	while (ros::ok())
	{
	ros::spinOnce();
	r.sleep();
	}
	// Start the callback functions.
	ros::spin();
	return 0;
	}
