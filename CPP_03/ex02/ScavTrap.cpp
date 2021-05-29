#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
}

ScavTrap::ScavTrap(std::string valueName) : ClapTrap(valueName)
{
	name = valueName;
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 50;
	maxEnergyPoints = 50;
	level = 1;
	meleeAttackDamage = 20;
	rangedAttackDamage = 15;
	armorAttackReduction = 3;
}

ScavTrap::~ScavTrap()
{
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &scavTrap)
{
	name = scavTrap.name;
	hitPoints = scavTrap.hitPoints;
	maxEnergyPoints = scavTrap.maxEnergyPoints;
	energyPoints = scavTrap.energyPoints;
	maxEnergyPoints = scavTrap.maxEnergyPoints;
	level = scavTrap.level;
	meleeAttackDamage = scavTrap.meleeAttackDamage;
	rangedAttackDamage = scavTrap.rangedAttackDamage;
	armorAttackReduction = scavTrap.armorAttackReduction;

	return *this;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	if (energyPoints < 25) {
		std::cout << ITALIC << "\t\t\t\t\t\t* EP are not enough for VaultHunter.EXE *" << RESET << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << MAGENTA ITALIC << "\t\t\t*** " RESET RESET << name << MAGENTA ITALIC <<" activating challenge newcomer ***" << RESET RESET << std::endl << std::endl;
	std::string quotes[] = {"This weapon feels... affordable.", "Ugh, I'll never get the smell of thrift off my hands.", "And now, to see how the other half lives.", "Absolutely disgusting!", "Was this weapon made by BABIES? By POVERTY stricken babies?!", "Gaston, more bullets!"};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 6] << "\"" << RESET RESET << std::endl;
	energyPoints -= 25;
	std::cout << ITALIC ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET RESET << name << ITALIC << " attack " << target << " with challenge newcomer *"  << RESET << std::endl;
}
