#include "Zombie.hpp"

Zombie::Zombie() : _name("no name")
{
}

Zombie::~Zombie()
{
}

Zombie::Zombie(const std::string& name, const std::string& type) : _name(name), _type(type)
{
}

void	Zombie::announce()
{
	std::string color[] = {RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};
	std::string randomColor = color[rand() % 7];

	std::string speech[] = {"Braiiiiiiinnnssss...", "Grrrrrrrrr...", "Om - nom - nom...", "Khrrrrrr...", "Shhhhhhh...", "Taaaasssstttyyy..."};
	std::cout << randomColor << "<" << _name << " (" << _type << ")> " << RESET;
	std::cout << randomColor << speech[rand() % 6] << RESET << std::endl;
}
