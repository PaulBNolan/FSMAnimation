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


Walking::Walking()
{
}


Walking::~Walking()
{
}
//The belows functions are used to display text indicating a state change
void Walking::idle(Animation* a)
{
	std::cout << "Walking -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Walking::climbing(Animation* a)
{
	std::cout << "Walking -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
void Walking::jumping(Animation* a)
{
	std::cout << "Walking->Jumping" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
void Walking::shovelling(Animation *a)
{
	std::cout << "Walking->Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}
void Walking::swordmanship(Animation *a)
{
	std::cout << "Walking->Swordmanship" << std::endl;
	a->setCurrent(new Swordmanship());
	delete this;
}
void Walking::hammering(Animation *a)
{
	std::cout << "Walking->Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}