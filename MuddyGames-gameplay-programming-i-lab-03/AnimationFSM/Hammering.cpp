#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Walking.h>
#include <Shovelling.h>
#include <Swordmanship.h>
#include <Hammering.h>
#include <string>

/// <summary>
/// @Author: Paul Nolan
/// @Version 2.0
/// </summary>


Hammering::Hammering()
{
}


Hammering::~Hammering()
{
}
//The belows functions are used to display text indicating a state change
void Hammering::idle(Animation* a)
{
	std::cout << "Hammering -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Hammering::climbing(Animation* a)
{
	std::cout << "Hammering -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
void Hammering::walking(Animation* a)
{
	std::cout << "Hammering->Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
void Hammering::shovelling(Animation *a)
{
	std::cout << "Hammering->Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}
void Hammering::swordmanship(Animation *a)
{
	std::cout << "Hammering->Swordmanship" << std::endl;
	a->setCurrent(new Swordmanship());
	delete this;
}
void Hammering::jumping(Animation *a)
{
	std::cout << "Hammering->Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}