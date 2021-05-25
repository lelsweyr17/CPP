#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent:: ZombieEvent() : _type("Classic zombie")
{
}

ZombieEvent::~ ZombieEvent()
{
}

void		ZombieEvent::setZombieType()
{
	std::string zombieType[] = {"Classic zombie", "Virus zombie", "Brainwashed zombie", "Nucrear zombie", "Warlock zombie"};

	_type = zombieType[rand() % 5];
}

std::string	ZombieEvent::getRandomName()
{
	std::string name[] = {"Bella", "Montimer", "Kossandra", "Alexandr", "Nina", "Don", "Dina", "Katherin", "Bob", "Elza"};
	
	return name[rand() % 10];
}

void		ZombieEvent::randomChump()
{
	Zombie *zombie;

	zombie = newZombie(getRandomName());
	zombie->announce();
	delete zombie;
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, _type);
	return zombie;
}
