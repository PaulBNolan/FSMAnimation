#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include <Input.h>
#include <Animation.h>
#include <Debug.h>

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>

class State
{
public:
	virtual void handleInput() {}

	virtual void update() {}

	//The below functions are used to represent each possible action and have counterparts in each class which are used based on what the animation* is
	virtual void idle(Animation* a)
	{
		DEBUG_MSG("State::Idling");
	}
	virtual void walking(Animation* a)
	{
		DEBUG_MSG("State::Walking");
	}
	virtual void jumping(Animation* a)
	{
		DEBUG_MSG("State::Jumping");
	}
	virtual void climbing(Animation* a)
	{
		DEBUG_MSG("State::Climbing");
	}
	virtual void hammering(Animation* a)
	{
		DEBUG_MSG("State::Hammering");
	}
	virtual void swordmanship(Animation* a)
	{
		DEBUG_MSG("State::Swordmanship");
	}
	virtual void shovelling(Animation* a)
	{
		DEBUG_MSG("State::Shovelling");
	}
};

#endif // ! ANIMATION_H