#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Walking.h>
#include <Shovelling.h>
#include <Swordmanship.h>
#include <Hammering.h>
#include <string>


Shovelling::Shovelling()
{
}


Shovelling::~Shovelling()
{
}

void Shovelling::idle(Animation* a)
{
	std::cout << "Shovelling -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Shovelling::climbing(Animation* a)
{
	std::cout << "Shovelling -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
void Shovelling::walking(Animation* a)
{
	std::cout << "Shovelling->Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Shovelling::jumping(Animation *a)
{
	std::cout << "Shovelling->Jumping" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}

void Shovelling::swordmanship(Animation *a)
{
	std::cout << "Shovelling->Swordmanship" << std::endl;
	a->setCurrent(new Swordmanship());
	delete this;
}

void Shovelling::hammering(Animation *a)
{
	std::cout << "Shovelling->Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}