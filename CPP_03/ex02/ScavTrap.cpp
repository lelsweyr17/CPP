#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
}

ScavTrap::ScavTrap(std::string valueName, int hit, int maxHit, int energy, int maxEnergy, int lvl, int melee, int ranged, int armor) : ClapTrap(valueName, hit, maxHit, energy, maxEnergy, lvl, ranged, melee, armor)
{
}

ScavTrap::~ScavTrap()
{
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap)
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
		std::cout << ITALIC << "\t\t\t\t\t\t* EP are not enough for VaultHunter.EXE *" << RESET_FONT << std::endl << std::endl;
		return ;
	}
	std::cout << MAGENTA ITALIC << "\t\t\t*** " RESET_FONT RESET << name << MAGENTA ITALIC <<" activating challenge newcomer ***" << RESET_FONT RESET << std::endl << std::endl;
	std::string quotes[] = {"This weapon feels... affordable.", "Ugh, I'll never get the smell of thrift off my hands.", "And now, to see how the other half lives.", "Absolutely disgusting!", "Was this weapon made by BABIES? By POVERTY stricken babies?!", "Gaston, more bullets!"};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 6] << "\"" << RESET_FONT RESET_FONT << std::endl;
	energyPoints -= 25;
	std::cout << ITALIC ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET RESET << name << ITALIC << " attack " << target << " with challenge newcomer *"  << RESET_FONT << std::endl << std::endl;
}

