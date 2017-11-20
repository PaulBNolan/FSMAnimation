#pragma once
#include "State.h"

class Shovelling :
	public State
{
public:
	Shovelling();
	~Shovelling();

	void idle(Animation* a);
	void climbing(Animation* a);
	void walking(Animation* a);
	void jumping(Animation *a);
	void swordmanship(Animation *a);
	void hammering(Animation *a);
};

