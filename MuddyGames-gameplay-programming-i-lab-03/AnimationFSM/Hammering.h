#pragma once
#include "State.h"

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>
/// 
class Hammering :
	public State
{
public:
	Hammering();
	~Hammering();
	//The functions for this class which are used to display text
	void idle(Animation* a);
	void climbing(Animation* a);
	void walking(Animation* a);
	void shovelling(Animation *a);
	void swordmanship(Animation *a);
	void jumping(Animation *a);
};

