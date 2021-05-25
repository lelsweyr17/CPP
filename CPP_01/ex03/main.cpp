#include "ZombieHorde.hpp"

int	main()
{
	ZombieHorde	*horde;
	
	srand(time(NULL));
	horde = new ZombieHorde(5);
	horde->announce();
	return 0;
}