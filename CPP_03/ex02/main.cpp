#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	srand(time(NULL));
	std::cout << BOLD "\t\t+++++++++++++++++++++++++++++++++++++++++" RESET << std::endl;
	std::cout << BOLD "\t\t+\t\tFIGHTING\t\t+" RESET << std::endl;
	std::cout << BOLD "\t\t+++++++++++++++++++++++++++++++++++++++++" RESET << std::endl;
	std::cout << ITALIC BOLD << "\t\t* LET'S START THIS THE-BEST-EVER-FIGHT *" << RESET RESET << std::endl << std::endl;
	ClapTrap clapTrap(MAGENTA BOLD ITALIC "CLAPTRAP" RESET RESET RESET, 200, 200, 200, 200, 2, 60, 40, 10);
	FragTrap fragTrap(CYAN BOLD ITALIC "FRAGTRAP" RESET RESET RESET, 100, 100, 100, 100, 1, 30, 20, 5);
	FragTrap cloneFragTrap(fragTrap);
	ScavTrap scavTrap(YELLOW BOLD ITALIC "SCAVTRAP" RESET RESET RESET, 100,100, 50, 50, 1, 20, 15, 3);
	ScavTrap cloneScavTrap(scavTrap);

	clapTrap.meleeAttack("OLEG");
	scavTrap.randomActionQuotes("JACK");
	clapTrap.beRepaired(50);
	fragTrap.meleeAttack("BORIS");
	scavTrap.rangedAttack("JACK");
	clapTrap.randomActionQuotes("OLEG");
	fragTrap.takeDamage(30);
	scavTrap.challengeNewcomer("JACK");
	clapTrap.takeDamage(50);
	scavTrap.takeDamage(10);
	fragTrap.rangedAttack("BORIS");
	fragTrap.vaulthunter_dot_exe("BORIS");
	scavTrap.beRepaired(10);
	clapTrap.rangedAttack("OLEG");
	scavTrap.meleeAttack("JACK");
	fragTrap.randomActionQuotes("BORIS");
	fragTrap.beRepaired(30);
	std::cout << ITALIC BOLD << "\t\t* THE END OF A FIERCE FIGHT *" << RESET << std::endl << std::endl;
	return 0;
}