#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent:: ZombieEvent()
{
}

ZombieEvent::~ ZombieEvent()
{
}

void	ZombieEvent::setZombieType()
{
	std::string zombieType[] = {"Classic zombie", "Virus zombie", "Brainwashed zombie", "Nucrear zombie", "Warlock zombie"};

	// srand(time(NULL));
	_type = zombieType[rand() % 5];
}

std::string	ZombieEvent::getZombieType()
{
	return _type;
}

std::string	ZombieEvent::getRandomName()
{
	std::string name[] = {"Bella", "Montimer", "Kossandra", "Alexandr", "Nina", "Don", "Dina", "Katherin", "Bob", "Elza"};
	
	// srand(time(NULL));
	return name[rand() % 10];
}

void	ZombieEvent::randomChump()
{
	Zombie *zombie;
	std::string name;

	name = ZombieEvent::getRandomName();
	zombie = ZombieEvent::newZombie(name);

	zombie->setZombieName(name);
	zombie->setZombieType(ZombieEvent::getZombieType());
	zombie->announce();
	delete zombie;
}

Zombie  *ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie;
	ZombieEvent::_name = name;
	ZombieEvent::setZombieType();
	return zombie;
}
