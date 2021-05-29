#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	srand(time(NULL));
	std::cout << BOLD "\t\t+++++++++++++++++++++++++++++++++++++++++" RESET << std::endl;
	std::cout << BOLD "\t\t+\t\tFIGHTING\t\t+" RESET << std::endl;
	std::cout << BOLD "\t\t+++++++++++++++++++++++++++++++++++++++++" RESET << std::endl << std::endl;
	std::cout << ITALIC BOLD << "\t\t* LET'S START THIS THE-BEST-EVER-FIGHT *" << RESET RESET <<  std::endl << std::endl;
	ClapTrap clapTrap(MAGENTA BOLD ITALIC "CLAPTRAP" RESET RESET RESET);
	FragTrap fragTrap(CYAN BOLD ITALIC "FRAGTRAP" RESET RESET RESET);
	FragTrap cloneFragTrap(fragTrap);
	ScavTrap scavTrap(YELLOW BOLD ITALIC "SCAVTRAP" RESET RESET RESET);
	ScavTrap cloneScavTrap(scavTrap);
	NinjaTrap ninjaTrap(GREEN BOLD ITALIC "NINJATRAP" RESET RESET RESET);
	NinjaTrap cloneNinjaTrap(ninjaTrap);

	clapTrap.meleeAttack("OLEG");
	scavTrap.randomActionQuotes("ROSE");
	clapTrap.beRepaired(50);
	fragTrap.meleeAttack("JACK");
	ninjaTrap.meleeAttack("ROSE");
	scavTrap.rangedAttack("BORIS");
	clapTrap.randomActionQuotes("ROSE");
	ninjaTrap.randomActionQuotes("OLEG");
	fragTrap.takeDamage(30);
	scavTrap.challengeNewcomer("JACK");
	clapTrap.takeDamage(50);
	ninjaTrap.rangedAttack("ROSE");
	scavTrap.takeDamage(10);
	ninjaTrap.ninjaShoebox("JACK");
	fragTrap.rangedAttack("BORIS");
	fragTrap.vaulthunter_dot_exe("BORIS");
	ninjaTrap.takeDamage(25);
	scavTrap.beRepaired(10);
	clapTrap.rangedAttack("OLEG");
	scavTrap.meleeAttack("BORIS");
	fragTrap.randomActionQuotes("LACK");
	fragTrap.beRepaired(30);
	std::cout << ITALIC << "\t\t\t * OLEG IS DEAD *" << RESET << std::endl;
	std::cout << ITALIC << "\t\t\t * BORIS IS DEAD *" << RESET << std::endl;
	std::cout << ITALIC << "\t\t\t * JACK IS DEAD *" << RESET << std::endl;
	std::cout << ITALIC << "\t\t\t * ROSE IS DEAD *" << RESET << std::endl << std::endl;

	std::cout << ITALIC BOLD << "\t\t* THE END OF A FIERCE FIGHT *" << RESET << std::endl << std::endl;;
	return 0;
}