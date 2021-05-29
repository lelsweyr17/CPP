#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << BOLD "\t\t+++++++++++++++++++++++++++++++++++++++++" RESET << std::endl;
	std::cout << BOLD "\t\t+\t\t\t\t\tFIGHT #1\t\t+" RESET << std::endl;
	std::cout << BOLD "\t\t+++++++++++++++++++++++++++++++++++++++++" RESET << std::endl;
	std::cout << ITALIC BOLD << "\t\t* LET'S START THIS THE-BEST-EVER-FIGHT *" << RESET RESET << std::endl << std::endl;
	FragTrap frapTrap(RED ITALIC BOLD "FRAGTRAP" RESET RESET RESET);
	ScavTrap scavTrap(YELLOW ITALIC BOLD "SCAVTRAP" RESET RESET RESET);
	srand(time(NULL));

	frapTrap.meleeAttack("GUEST");
	frapTrap.rangedAttack("GUEST");
	frapTrap.takeDamage(rand() % 20 + 1);
	frapTrap.beRepaired(rand() % 20 + 1);
	frapTrap.vaulthunter_dot_exe("GUEST");

	scavTrap.meleeAttack("TEST");
	scavTrap.rangedAttack("TEST");
	scavTrap.takeDamage(rand() % 20 + 1);
	scavTrap.beRepaired(rand() % 20 + 1);
	scavTrap.challengeNewcomer("TEST");

	std::cout << ITALIC BOLD << "\t\t* THE END OF A FIERCE FIGHT *" << RESET << std::endl << std::endl;
	return 0;
}