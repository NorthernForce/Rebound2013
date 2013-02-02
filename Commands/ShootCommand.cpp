#include "ShootCommand.h"

ShootCommand::ShootCommand() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(s_shooter);
}

// Called just before this Command runs the first time
void ShootCommand::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ShootCommand::Execute() {
	s_shooter->shoot(0.3);
}

// Make this return true when this Command no longer needs to run execute()
bool ShootCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ShootCommand::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShootCommand::Interrupted() {
}
