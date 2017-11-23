#pragma once
#include "State.h"

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

class Shovelling :
	public State
{
public:
	Shovelling();
	~Shovelling();
	//The functions for this class which are used to display text
	void idle(Animation* a);
	void climbing(Animation* a);
	void walking(Animation* a);
	void jumping(Animation *a);
	void swordmanship(Animation *a);
	void hammering(Animation *a);
};

