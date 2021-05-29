#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	srand(time(NULL));
	ClapTrap clapTrap(MAGENTA BOLD ITALIC "CLAPTRAP" RESET_FONT RESET_FONT RESET, 200, 200, 200, 200, 2, 60, 40, 10);
	FragTrap fragTrap(CYAN BOLD ITALIC "FRAGTRAP" RESET_FONT RESET_FONT RESET, 100, 100, 100, 100, 1, 30, 20, 5);
	// FragTrap cloneFragTrap(fragTrap);
	ScavTrap scavTrap(YELLOW BOLD ITALIC "SCAVTRAP" RESET_FONT RESET_FONT RESET, 100,100, 50, 50, 1, 20, 15, 3);
	// ScavTrap cloneScavTrap(scavTrap);

	clapTrap.meleeAttack("OLEG");
	scavTrap.randomActionQuotes("JACK");
	clapTrap.beRepaired(50);
	fragTrap.meleeAttack("BORIS");
	scavTrap.takeDamage(10);
	scavTrap.rangedAttack("JACK");
	clapTrap.randomActionQuotes("OLEG");
	fragTrap.takeDamage(30);
	clapTrap.takeDamage(50);
	fragTrap.rangedAttack("BORIS");
	scavTrap.beRepaired(10);
	clapTrap.rangedAttack("OLEG");
	scavTrap.meleeAttack("JACK");
	fragTrap.randomActionQuotes("BORIS");
	fragTrap.beRepaired(30);
	return 0;
}