#pragma once
#include "State.h"
class Swordmanship :
	public State
{
public:
	Swordmanship();
	~Swordmanship();

	void idle(Animation* a);
	void climbing(Animation* a);
	void walking(Animation* a);
	void shovelling(Animation *a);
	void jumping(Animation *a);
	void hammering(Animation *a);
};
