#pragma once
#include "State.h"

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

class Walking :
	public State
{
public:
	Walking();
	~Walking();
	//The functions for this class which are used to display text
	void idle(Animation* a);
	void climbing(Animation* a);
	void jumping(Animation* a);
	void shovelling(Animation *a);
	void swordmanship(Animation *a);
	void hammering(Animation *a);
};
