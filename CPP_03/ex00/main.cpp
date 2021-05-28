#include "FragTrap.hpp"

int main()
{
	std::cout << BOLD "\t\t+++++++++++++++++++++++++++++++++++++++++" RESET_FONT << std::endl;
	std::cout << BOLD "\t\t+\t\t\t\t\tFIGHT #1\t\t+" RESET_FONT << std::endl;
	std::cout << BOLD "\t\t+++++++++++++++++++++++++++++++++++++++++" RESET_FONT << std::endl << std::endl;
	{
		std::cout << ITALIC << "\t\t* LET'S START THIS THE-BEST-EVER-FIGHT *" << RESET_FONT << std::endl << std::endl;
		FragTrap frapTrap(RED ITALIC BOLD "FRAGTRAP" RESET_FONT RESET_FONT RESET);
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
		std::cout << ITALIC << "\t\t * MECHROMAGICIAN IS DEAD *" << RESET_FONT << std::endl << std::endl;
		std::cout << ITALIC << "\t\t* THE END OF A FIERCE FIGHT *" << RESET_FONT << std::endl << std::endl;
	}
	std::cout << BOLD "\t\t+++++++++++++++++++++++++++++++++++++++++" RESET_FONT << std::endl;
	std::cout << BOLD "\t\t+\t\t\t\t\tFIGHT #2\t\t+" RESET_FONT << std::endl;
	std::cout << BOLD "\t\t+++++++++++++++++++++++++++++++++++++++++" RESET_FONT << std::endl << std::endl;
	{
		std::cout << ITALIC << "\t\t* LET'S START THIS THE-BEST-EVER-FIGHT *" << RESET_FONT << std::endl << std::endl;
		FragTrap frapTrap(RED ITALIC BOLD "FRAGTRAP" RESET_FONT RESET_FONT RESET);
		srand(time(NULL));

		frapTrap.meleeAttack(CYAN "GUN WIZARD" RESET);
		frapTrap.randomActionQuotes(CYAN "GUN WIZARD" RESET);
		frapTrap.takeDamage(rand() % 30 + 1);
		frapTrap.rangedAttack(CYAN "GUN WIZARD" RESET);
		frapTrap.randomActionQuotes(CYAN "GUN WIZARD" RESET);
		frapTrap.takeDamage(rand() % 30 + 1);
		frapTrap.rangedAttack(CYAN "GUN WIZARD" RESET);
		frapTrap.randomActionQuotes(CYAN "GUN WIZARD" RESET);
		frapTrap.takeDamage(rand() % 30 + 1);
		frapTrap.beRepaired(rand() % 20 + 1);
		frapTrap.randomActionQuotes(CYAN "GUN WIZARD" RESET);
		frapTrap.takeDamage(rand() % 30 + 1);
		frapTrap.vaulthunter_dot_exe(CYAN "GUN WIZARD" RESET);
		frapTrap.rangedAttack(CYAN "GUN WIZARD" RESET);
		frapTrap.meleeAttack(CYAN "GUN WIZARD" RESET);
		frapTrap.beRepaired(rand() % 20 + 1);
		frapTrap.randomActionQuotes(CYAN "GUN WIZARD" RESET);
		frapTrap.takeDamage(rand() % 30 + 1);
		frapTrap.takeDamage(rand() % 30 + 1);
		std::cout << ITALIC << "\t\t * GUN WIZARD IS DEAD *" << RESET_FONT << std::endl << std::endl;
		std::cout << ITALIC << "\t\t* THE END OF A FIERCE FIGHT *" << RESET_FONT << std::endl << std::endl;
	}

	return 0;
}