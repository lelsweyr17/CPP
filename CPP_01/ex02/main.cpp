#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie zombie;
	ZombieEvent zombieEvent;
	std::string name;

	srand(time(NULL));
	std::cout << std::endl;
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