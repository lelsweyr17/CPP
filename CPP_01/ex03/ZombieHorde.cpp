#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde() : _type("no type")
{
}

ZombieHorde::~ZombieHorde()
{
	delete[] _horde;
}

void	ZombieHorde::setZombieType()
{
	std::string zombieType[] = {"Classic zombie", "Virus zombie", "Brainwashed zombie", "Nucrear zombie", "Warlock zombie"};

	_type = zombieType[rand() % 5];
}

ZombieHorde::ZombieHorde(int n) : _zombieNbr(n), _type("Classic zombie")
{
	_horde = new Zombie[n];
	setZombieType();
	for (int i = 0; i < n; i++)
	{
		_horde[i] = Zombie(getRandomName(), _type);
	}
}

std::string	ZombieHorde::getRandomName()
{
	std::string name[] = {"Bella", "Montimer", "Kossandra", "Alexandr", "Nina", "Don", "Dina", "Katherin", "Bob", "Elza"};
	
	return name[rand() % 10];
}

void	ZombieHorde::announce()
{
	std::cout << std::endl;
	std::cout << RED BOLD_FONT "HOOORRRDEEEE!!!! COME ON!" RESET_BOLD RESET << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < _zombieNbr; i++)
	{
		if (i != 0)
			std::cout << "-------------------------------------------------------" << std::endl;
		_horde[i].announce();
	}
	std::cout << std::endl;
}