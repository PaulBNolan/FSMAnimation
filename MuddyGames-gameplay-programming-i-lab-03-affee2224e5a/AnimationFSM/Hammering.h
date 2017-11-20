#pragma once
#include "State.h"
class Hammering :
	public State
{
public:
	Hammering();
	~Hammering();

	void idle(Animation* a);
	void climbing(Animation* a);
	void walking(Animation* a);
	void shovelling(Animation *a);
	void swordmanship(Animation *a);
	void jumping(Animation *a);
};

