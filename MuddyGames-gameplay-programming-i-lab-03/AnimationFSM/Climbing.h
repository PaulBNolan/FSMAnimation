#ifndef CLIMBING_H
#define CLIMBING_H

#include <State.h>

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

class Climbing : public State
{
public:
	Climbing() {};
	~Climbing() {};
	//The functions for this class which are used to display text
	void idle(Animation* a);
	void jumping(Animation* a);
	void walking(Animation* a);
	void shovelling(Animation *a);
	void swordmanship(Animation *a);
	void hammering(Animation *a);
};

#endif // !IDLE_H