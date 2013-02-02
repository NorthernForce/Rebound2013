#include "Drive.h"
#include "../Robotmap.h"
#include "../Commands/DriveWithJoystick.h"

Drive::Drive() : Subsystem("ExampleSubsystem"), 
	frontLeft(k_frontLeft),
	rearLeft(k_rearLeft),
	frontRight(k_frontRight),
	rearRight(k_rearRight),
	drive(frontLeft, rearLeft, frontRight, rearRight)
{
	
}
    
void Drive::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new DriveWithJoystick());
}

void Drive::driveRobot(FRCXboxJoystick &stick) {
	drive.ArcadeDrive(stick);
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

