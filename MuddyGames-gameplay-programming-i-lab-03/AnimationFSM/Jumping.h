#ifndef JUMPING_H
#define JUMPING_H

#include <State.h>

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

class Jumping : public State
{
public:
	Jumping() {};
	~Jumping() {};
	//The functions for this class which are used to display text
	void idle(Animation* a);
	void climbing(Animation* a);
	void walking(Animation* a);
	void shovelling(Animation *a);
	void swordmanship(Animation *a);
	void hammering(Animation *a);
};

#endif // !IDLE_H