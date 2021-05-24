#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

void	Zombie::setZombieType(std::string type)
{
	_type = type;
}
void	Zombie::setZombieName(std::string name)
{
	_name = name;
}

std::string	Zombie::getZombieType()
{
	return _type;
}

std::string	Zombie::getZombieName()
{
	return _name;
}

Zombie::Zombie(std::string _name, std::string _type)
{
	_name = "Noname";
	_type = "Zombie";
}

void	Zombie::announce()
{
	std::string color[] = {RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};
	std::string randomColor = color[rand() % 7];

	std::string speech[] = {"Braiiiiiiinnnssss...", "Grrrrrrrrr...", "Om - nom - nom...", "Khrrrrrr...", "Shhhhhhh...", "Taaaasssstttyyy..."};
	std::cout << randomColor << "<" << Zombie::_name << " (" << Zombie::_type << ")> " << RESET;
	std::cout << randomColor << speech[rand() % 6] << RESET << std::endl;
}
