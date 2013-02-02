#include "OI.h"
#include "Commands/ShootCommand.h"
#include "Commands/ShootStop.h"

OI::OI() try : m_driverStick(1) {
	// Process operator interface input here.
	m_driverStick.A.WhenPressed(new ShootCommand());
	m_driverStick.B.WhenPressed(new ShootStop());
} catch (exception e)
{
	printf("Operator Interface failed to initialize.");
}

FRCXboxJoystick &OI::GetDriverStick() {
	return m_driverStick;
}
