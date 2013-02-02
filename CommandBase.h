#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/Drive.h"
#include "Subsystems/ShooterSubsystem.h"
#include "OI.h"


/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	
	// Create a single static instance of all of your subsystems
	static Drive* s_drive;
	static ShooterSubsystem* s_shooter;
	static OI* oi;
	static void init();
};

#endif