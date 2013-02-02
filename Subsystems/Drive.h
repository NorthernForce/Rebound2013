#ifndef EXAMPLE_SUBSYSTEM_H
#define EXAMPLE_SUBSYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "RobotDrive.h"
#include "CANJaguar.h"
#include "../FRCXboxJoystick.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Drive: public Subsystem {
private:
	CANJaguar frontLeft;
	CANJaguar rearLeft;
	CANJaguar frontRight;
	CANJaguar rearRight;
	RobotDrive drive;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Drive();
	void InitDefaultCommand();
	void driveRobot(FRCXboxJoystick &stick);
};

#endif
