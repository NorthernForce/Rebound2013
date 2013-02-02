#ifndef SHOOTERSUBSYSTEM_H
#define SHOOTERSUBSYSTEM_H

#include "WPILib.h"
#include "Commands/Subsystem.h"
#include "CANJaguar.h"


/*
 * ShooterSubsystem.h
 *
 *  Created on: Jan 30, 2013
 *      Author: Driver
 */

/*
 * Description:
 */
class ShooterSubsystem : public Subsystem {
private:
	CANJaguar shooterJaguarTop;
	CANJaguar shooterJaguarBottom;
public:
	ShooterSubsystem();
	void InitDefaultCommand();
	void shoot(float power);
};
#endif
