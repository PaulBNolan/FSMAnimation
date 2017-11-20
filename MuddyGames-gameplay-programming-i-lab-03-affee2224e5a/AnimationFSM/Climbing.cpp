#include <Climbing.h>
#include <Jumping.h>
#include <Idle.h>
#include <Walking.h>
#include <Shovelling.h>
#include <Swordmanship.h>
#include <Hammering.h>
#include <string>

void Climbing::idle(Animation* a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Climbing::jumping(Animation* a)
{
	std::cout << "Climbing -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Climbing::walking(Animation* a)
{
	std::cout << "Climbing->Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Climbing::shovelling(Animation *a)
{
	std::cout << "Climbing->Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}

void Climbing::swordmanship(Animation *a)
{
	std::cout << "Climbing->Swordmanship" << std::endl;
	a->setCurrent(new Swordmanship());
	delete this;
}

void Climbing::hammering(Animation *a)
{
	std::cout << "Climbing->Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}