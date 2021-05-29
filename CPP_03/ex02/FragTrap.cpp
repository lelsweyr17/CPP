#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
}

FragTrap::FragTrap(std::string valueName, int hit, int maxHit, int energy, int maxEnergy, int lvl, int melee, int ranged, int armor) : ClapTrap(valueName, hit, maxHit, energy, maxEnergy, lvl, ranged, melee, armor)
{
}

FragTrap::~FragTrap()
{
	
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap)
{
}

FragTrap	&FragTrap::operator=(const FragTrap &fragTrap)
{
	name = fragTrap.name;
	hitPoints = fragTrap.hitPoints;
	maxEnergyPoints = fragTrap.maxEnergyPoints;
	energyPoints = fragTrap.energyPoints;
	maxEnergyPoints = fragTrap.maxEnergyPoints;
	level = fragTrap.level;
	meleeAttackDamage = fragTrap.meleeAttackDamage;
	rangedAttackDamage = fragTrap.rangedAttackDamage;
	armorAttackReduction = fragTrap.armorAttackReduction;

	return *this;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (energyPoints < 25)
	{
		std::cout << ITALIC << "\t\t\t\t\t\t* EP are not enough for VaultHunter.EXE *" << RESET_FONT << std::endl << std::endl;
		return ;
	}
	std::cout << CYAN ITALIC << "\t\t\t*** " RESET_FONT RESET << name << CYAN ITALIC <<" activating VaultHunter.EXE ***" << RESET_FONT << std::endl << std::endl;
	std::string quotes[] = {"Hey everybody, check out my package!", "Loading combat packages!", "I have an IDEA!", "Let's get this party started!", "It's like a box of chocolates..."};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 5] << "\"" << RESET_FONT RESET_FONT << std::endl;
	energyPoints -= 25;
	std::cout << ITALIC ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET RESET << name << ITALIC << " attack " << target << " with VaultHunter.EXE *"  << RESET_FONT << std::endl << std::endl;
}
