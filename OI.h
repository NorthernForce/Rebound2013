#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "FRCXboxJoystick.h"

class OI {
private:
	FRCXboxJoystick m_driverStick;
public:
	FRCXboxJoystick &GetDriverStick();
	OI();
};

#endif
