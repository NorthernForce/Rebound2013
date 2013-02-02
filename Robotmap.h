#ifndef ROBOTMAP_H
#define ROBOTMAP_H


/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// #define LEFTMOTOR 1
// #define RIGHTMOTOR 2

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// #define RANGE_FINDER_PORT 1
// #define RANGE_FINDER_MODULE 1
enum JaguarPorts {
	k_frontLeft = 1,
	k_rearLeft = 2,
	k_frontRight = 5,
	k_rearRight = 7,
	k_shooterTop = 3,
	k_shooterBottom = 4,
	k_lifter = 6
};

enum XBoxJoystickPorts
{
	k_XBoxButtonA = 1,
	k_XBoxButtonB = 2,
	k_XBoxButtonX = 3,
	k_XBoxButtonY = 4,
	k_XBoxButtonLeft = 5,
	k_XBoxButtonRight = 6,
	k_XBoxButtonBack = 7,
	k_XBoxButtonStart = 8,
	k_XBoxButtonLeftJoystick = 9,
	k_XBoxButtonRightJoystick = 10,
};


#endif
