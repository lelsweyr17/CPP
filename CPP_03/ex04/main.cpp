#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	srand(time(NULL));
	std::cout << BOLD "\t\t+++++++++++++++++++++++++++++++++++++++++" RESET << std::endl;
	std::cout << BOLD "\t\t+\t\tFIGHTING\t\t+" RESET << std::endl;
	std::cout << BOLD "\t\t+++++++++++++++++++++++++++++++++++++++++" RESET << std::endl << std::endl;
	std::cout << ITALIC BOLD << "\t\t* LET'S START THIS THE-BEST-EVER-FIGHT *" << RESET << std::endl;
	ClapTrap clapTrap(MAGENTA BOLD ITALIC "CLAPTRAP" RESET);
	FragTrap fragTrap(CYAN BOLD ITALIC "FRAGTRAP" RESET);
	FragTrap cloneFragTrap(fragTrap);
	ScavTrap scavTrap(YELLOW BOLD ITALIC "SCAVTRAP" RESET);
	ScavTrap cloneScavTrap(scavTrap);
	NinjaTrap ninjaTrap(GREEN BOLD ITALIC "NINJATRAP" RESET);
	NinjaTrap cloneNinjaTrap(ninjaTrap);
	SuperTrap superTrap(BOLD ITALIC "SUPERTRAP" RESET);
	SuperTrap cloneSuperTrap(superTrap);

	superTrap.randomActionQuotes("DRAKULA");
	clapTrap.meleeAttack("OLEG");
	scavTrap.randomActionQuotes("ROSE");
	clapTrap.beRepaired(50);
	superTrap.meleeAttack("DRAKULA");
	ninjaTrap.meleeAttack("ROSE");
	superTrap.takeDamage(35);
	scavTrap.rangedAttack("BORIS");
	superTrap.ninjaShoebox("DRAKULA");
	fragTrap.meleeAttack("JACK");
	ninjaTrap.randomActionQuotes("OLEG");
	superTrap.rangedAttack("DRAKULA");
	scavTrap.challengeNewcomer("JACK");
	clapTrap.takeDamage(50);
	ninjaTrap.rangedAttack("ROSE");
	superTrap.beRepaired(25);
	scavTrap.takeDamage(10);
	ninjaTrap.ninjaShoebox("JACK");
	fragTrap.rangedAttack("BORIS");
	fragTrap.vaulthunter_dot_exe("BORIS");
	ninjaTrap.takeDamage(25);
	scavTrap.beRepaired(10);
	clapTrap.rangedAttack("OLEG");
	superTrap.vaulthunter_dot_exe("DRAKULA");
	scavTrap.meleeAttack("BORIS");
	fragTrap.randomActionQuotes("LACK");
	fragTrap.beRepaired(30);
	std::cout << ITALIC << "\t\t\t * OLEG IS DEAD *" << RESET << std::endl;
	std::cout << ITALIC << "\t\t\t * BORIS IS DEAD *" << RESET << std::endl;
	std::cout << ITALIC << "\t\t\t * JACK IS DEAD *" << RESET << std::endl;
	std::cout << ITALIC << "\t\t\t * ROSE IS DEAD *" << RESET << std::endl;
	std::cout << ITALIC << "\t\t\t * DRAKULA IS DEAD *" << RESET << std::endl << std::endl;

	std::cout << ITALIC BOLD << "\t\t* THE END OF A FIERCE FIGHT *" << RESET << std::endl << std::endl;;
	return 0;
}