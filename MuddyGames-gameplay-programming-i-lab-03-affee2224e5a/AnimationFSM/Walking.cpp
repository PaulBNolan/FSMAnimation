#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Walking.h>
#include <Shovelling.h>
#include <Swordmanship.h>
#include <Hammering.h>
#include <string>



Walking::Walking()
{
}


Walking::~Walking()
{
}

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