#include "FragTrap.hpp"

int main()
{
	std::cout << BOLD "\t\t+++++++++++++++++++++++++++++++++++++++++" RESET << std::endl;
	std::cout << BOLD "\t\t+\t\tFIGHTING\t\t+" RESET << std::endl;
	std::cout << BOLD "\t\t+++++++++++++++++++++++++++++++++++++++++" RESET << std::endl << std::endl;
	{
		std::cout << ITALIC << "\t\t* LET'S START THIS THE-BEST-EVER-FIGHT *" << RESET << std::endl;
		FragTrap frapTrap(RED ITALIC BOLD "FRAGTRAP" RESET RESET);
		srand(time(NULL));

		frapTrap.meleeAttack(YELLOW "MECHROMAGICIAN" RESET);
		frapTrap.randomActionQuotes(YELLOW "MECHROMAGICIAN" RESET);
		frapTrap.rangedAttack(YELLOW "MECHROMAGICIAN" RESET);
		frapTrap.takeDamage(rand() % 20 + 1);
		frapTrap.takeDamage(rand() % 20 + 1);
		frapTrap.randomActionQuotes(YELLOW "MECHROMAGICIAN" RESET);
		frapTrap.beRepaired(rand() % 20 + 1);
		frapTrap.takeDamage(rand() % 20 + 1);
		frapTrap.randomActionQuotes(YELLOW "MECHROMAGICIAN" RESET);
		frapTrap.rangedAttack(YELLOW "MECHROMAGICIAN" RESET);
		frapTrap.beRepaired(rand() % 20 + 1);
		frapTrap.vaulthunter_dot_exe(YELLOW "MECHROMAGICIAN" RESET);
		frapTrap.meleeAttack(YELLOW "MECHROMAGICIAN" RESET);
		frapTrap.takeDamage(rand() % 20 + 1);
		frapTrap.randomActionQuotes(YELLOW "MECHROMAGICIAN" RESET);
		frapTrap.takeDamage(rand() % 20 + 1);
		std::cout << ITALIC << "\t\t * MECHROMAGICIAN IS DEAD *" << RESET << std::endl;
		std::cout << ITALIC BOLD << "\t\t* THE END OF A FIERCE FIGHT *" << RESET << std::endl << std::endl;;
	}

	return 0;
}