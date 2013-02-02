/*
 * ShooterSubsystem.cpp
 *
 *  Created on: Jan 30, 2013
 *      Author: Driver
 */

#include "ShooterSubsystem.h"
#include "../CommandBase.h"

/*
 * Default constructor
 */
ShooterSubsystem::ShooterSubsystem() try : Subsystem("Shooter"), shooterJaguarTop(k_shooterTop), shooterJaguarBottom(k_shooterBottom)
{
	
} catch(exception e) {
	printf("FAILED to initialize shooterJaguar");
}

void ShooterSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void ShooterSubsystem::shoot(float power)
{
	shooterJaguarTop.Set(power);
	shooterJaguarBottom.Set(-power);
}
