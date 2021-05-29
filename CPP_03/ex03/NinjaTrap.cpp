#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
}

NinjaTrap::NinjaTrap(std::string valueName, int hit, int maxHit, int energy, int maxEnergy, int lvl, int melee, int ranged, int armor) : ClapTrap(valueName, hit, maxHit, energy, maxEnergy, lvl, ranged, melee, armor)
{
}

NinjaTrap::~NinjaTrap()
{
	
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninjaTrap) : ClapTrap(ninjaTrap)
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

void    NinjaTrap::ninjaShoebox(std::string const & target)
{
    if (energyPoints < 25) {
		std::cout << ITALIC << "\t\t\t\t\t\t* EP are not enough for Ninja Shoebox *" << RESET << std::endl << std::endl;
		return ;
	}
	std::cout << GREEN ITALIC << "\t\t\t*** " RESET << name << GREEN ITALIC <<" activating Ninja Shoebox ***" << RESET << std::endl << std::endl;
	std::string quotes[] = {"I'm cloaking...", "Roses are red and/Violets are blue/Wait... how many syllables was that?", "Shoot him... he's the real one...", "I'm a robot ninja...", "I'm invisible!", "Here, take this!", ".....SHhhHhHHhhHhhHHhHHhh....."};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 6] << "\"" << RESET RESET << std::endl;
	energyPoints -= 25;
	std::cout << ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " attack " << RED << target << RESET ITALIC << " with ninja shoebox *"  << RESET << std::endl << std::endl;
}
