#include "ShootStop.h"

ShootStop::ShootStop() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(s_shooter);
}

// Called just before this Command runs the first time
void ShootStop::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ShootStop::Execute() {
	s_shooter->shoot(0.0);
}

// Make this return true when this Command no longer needs to run execute()
bool ShootStop::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ShootStop::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShootStop::Interrupted() {
}
