#ifndef SHOOT_STOP_H
#define SHOOT_STOP_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class ShootStop: public CommandBase {
public:
	ShootStop();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
