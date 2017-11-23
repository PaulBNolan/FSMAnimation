#ifndef IDLE_H
#define IDLE_H

#include <State.h>

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

class Idle : public State
{
public:
	Idle() {};
	~Idle() {};
	void handleInput();
	void update();
	//The functions for this class which are used to display text
	void jumping(Animation* a);
	void climbing(Animation* a);
	void walking(Animation* a);
	void shovelling(Animation *a);
	void swordmanship(Animation *a);
	void hammering(Animation *a);
};

#endif // !IDLE_H