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


Swordmanship::Swordmanship()
{
}


Swordmanship::~Swordmanship()
{
}
//The belows functions are used to display text indicating a state change
void Swordmanship::idle(Animation* a)
{
	std::cout << "Swordmanship -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Swordmanship::climbing(Animation* a)
{
	std::cout << "Swordmanship -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
void Swordmanship::walking(Animation* a)
{
	std::cout << "Swordmanship->Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
void Swordmanship::shovelling(Animation *a)
{
	std::cout << "Swordmanship->Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}
void Swordmanship::jumping(Animation *a)
{
	std::cout << "Swordmanship->Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Swordmanship::hammering(Animation *a)
{
	std::cout << "Swordmanship->Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}