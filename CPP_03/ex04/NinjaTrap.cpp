#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
}

NinjaTrap::NinjaTrap(std::string valueName) : ClapTrap(valueName)
{
	name = valueName;
	hitPoints = 60;
	maxHitPoints = 60;
	energyPoints = 120;
	maxEnergyPoints = 120;
	level = 1;
	meleeAttackDamage = 60;
	rangedAttackDamage = 5;
	armorAttackReduction = 0;
}

NinjaTrap::~NinjaTrap()
{
	
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy) : ClapTrap(copy)
{
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &ninjaTrap)
{
	name = ninjaTrap.name;
	hitPoints = ninjaTrap.hitPoints;
	maxEnergyPoints = ninjaTrap.maxEnergyPoints;
	energyPoints = ninjaTrap.energyPoints;
	maxEnergyPoints = ninjaTrap.maxEnergyPoints;
	level = ninjaTrap.level;
	meleeAttackDamage = ninjaTrap.meleeAttackDamage;
	rangedAttackDamage = ninjaTrap.rangedAttackDamage;
	armorAttackReduction = ninjaTrap.armorAttackReduction;

	return *this;
}

void	NinjaTrap::ninjaShoebox(std::string const & target)
{
	if (energyPoints < 25) {
		std::cout << ITALIC << "\t\t\t\t\t\t* EP are not enough for Ninja Shoebox *" << RESET << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << GREEN ITALIC << "\t\t\t*** " RESET << name << GREEN ITALIC <<" activating Ninja Shoebox ***" << RESET << std::endl << std::endl;
	std::string quotes[] = {"I'm cloaking...", "Roses are red and/Violets are blue/Wait... how many syllables was that?", "Shoot him... he's the real one...", "I'm a robot ninja...", "I'm invisible!", "Here, take this!", ".....SHhhHhHHhhHhhHHhHHhh....."};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 6] << "\"" << RESET << std::endl;
	energyPoints -= 25;
	std::cout << ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " attack " << RED << target << RESET ITALIC << " with ninja shoebox *"  << RESET << std::endl;
}

