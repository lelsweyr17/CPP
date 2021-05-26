#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie		zombie;
	ZombieEvent	zombieEvent;
	std::string	name;

	srand(time(NULL));
	std::cout << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << BOLD_FONT "\t\tNot set zombie type" RESET << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if (i != 0)
			std::cout << "-------------------------------------------------------" << std::endl;
		zombieEvent.randomChump();
	}
	std::cout << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << BOLD_FONT "\t\tSet zombie type" RESET << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	zombieEvent.setZombieType();
	for (int i = 0; i < 10; i++)
	{
		if (i != 0)
			std::cout << "-------------------------------------------------------" << std::endl;
		zombieEvent.randomChump();
	}
	std::cout << std::endl;
	return (0);
}