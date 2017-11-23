#include <Animation.h>
#include <Idle.h>

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>


Animation::Animation()
{
	m_current = new Idle();
}

Animation::~Animation() {}

void Animation::setCurrent(State* s)
{
	m_current = s;
}

State* Animation::getCurrent()
{
	return m_current;
}

void Animation::setPrevious(State* s)
{
	m_previous = s;
}

State* Animation::getPrevious()
{
	return m_previous;
}

//The below functions are used to redirect the current to the state class functions which them redirect them to different classes based on what they are

void Animation::idle()
{
	m_current->idle(this);
}

void Animation::jumping()
{
	m_current->jumping(this);
}

void Animation::climbing()
{
	m_current->climbing(this);
}

void Animation::walking()
{
	m_current->walking(this);
}

void Animation::Hammering()
{
	m_current->hammering(this);
}

void Animation::Swordmanship()
{
	m_current->swordmanship(this);
}

void Animation::Shovelling()
{
	m_current->shovelling(this);
}