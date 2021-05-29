#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << BOLD "\t\t+++++++++++++++++++++++++++++++++++++++++" RESET << std::endl;
	std::cout << BOLD "\t\t+\t\tFIGHTING\t\t+" RESET << std::endl;
	std::cout << BOLD "\t\t+++++++++++++++++++++++++++++++++++++++++" RESET << std::endl << std::endl;
	std::cout << ITALIC BOLD << "\t\t* LET'S START THIS THE-BEST-EVER-FIGHT *" << RESET RESET <<  std::endl << std::endl;
	FragTrap frapTrap(RED ITALIC BOLD "FRAGTRAP" RESET RESET RESET);
	ScavTrap scavTrap(YELLOW ITALIC BOLD "SCAVTRAP" RESET RESET RESET);
	srand(time(NULL));

	frapTrap.meleeAttack("MARY");
	frapTrap.rangedAttack("MARY");
	frapTrap.takeDamage(rand() % 20 + 1);
	frapTrap.beRepaired(rand() % 20 + 1);
	frapTrap.vaulthunter_dot_exe("MARY");

	scavTrap.meleeAttack("DANY");
	scavTrap.rangedAttack("DANY");
	scavTrap.takeDamage(rand() % 20 + 1);
	scavTrap.beRepaired(rand() % 20 + 1);
	scavTrap.challengeNewcomer("DANY");

	std::cout << ITALIC << "\t\t * MARY IS DEAD *" << RESET << std::endl;
	std::cout << ITALIC << "\t\t * DANY IS DEAD *" << RESET << std::endl << std::endl;

	std::cout << ITALIC BOLD << "\t\t* THE END OF A FIERCE FIGHT *" << RESET << std::endl << std::endl;
	return 0;
}