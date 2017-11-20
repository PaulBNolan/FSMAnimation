#pragma once
#include "State.h"
class Walking :
	public State
{
public:
	Walking();
	~Walking();

	void idle(Animation* a);
	void climbing(Animation* a);
	void jumping(Animation* a);
	void shovelling(Animation *a);
	void swordmanship(Animation *a);
	void hammering(Animation *a);
};
