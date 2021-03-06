#include "CommandBase.h"
#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
Drive* CommandBase::s_drive = NULL;
ShooterSubsystem* CommandBase::s_shooter = NULL;
OI* CommandBase::oi = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	s_drive = new Drive();
	s_shooter = new ShooterSubsystem();
	oi = new OI();
}
