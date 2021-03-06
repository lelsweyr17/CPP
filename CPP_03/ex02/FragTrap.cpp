#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
}

FragTrap::FragTrap(std::string valueName) : ClapTrap(valueName)
{
	name = valueName;
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	armorAttackReduction = 5;
}

FragTrap::~FragTrap()
{
	
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
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
		std::cout << ITALIC << "\t\t\t\t\t\t* EP are not enough for VaultHunter.EXE *" << RESET << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << CYAN ITALIC << "\t\t\t*** " RESET << name << CYAN ITALIC <<" activating VaultHunter.EXE ***" << RESET << std::endl << std::endl;
	std::string quotes[] = {"Hey everybody, check out my package!", "Loading combat packages!", "I have an IDEA!", "Let's get this party started!", "It's like a box of chocolates..."};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 5] << "\"" << RESET << std::endl;
	energyPoints -= 25;
	std::cout << ITALIC ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " attack " << target << " with VaultHunter.EXE *"  << RESET << std::endl;
}
