#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std:: string valueName) : name(valueName), hitPoints(100), maxHitPoints(100), energyPoints(100), maxEnergyPoints(100), level(1), meleeAttackDamage(30), rangedAttackDamage(20), armorAttackReduction(5)
{
}

FragTrap::~FragTrap()
{
}

FragTrap::FragTrap(const FragTrap &fragTrap) : name(fragTrap.name), hitPoints(fragTrap.hitPoints), maxHitPoints(fragTrap.maxHitPoints), energyPoints(fragTrap.energyPoints), maxEnergyPoints(fragTrap.maxEnergyPoints), level(fragTrap.energyPoints), meleeAttackDamage(fragTrap.rangedAttackDamage), armorAttackReduction(fragTrap.armorAttackReduction)
{
}

FragTrap	&FragTrap::operator=(const FragTrap &fragTrap)
{
}

void		FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << "<name>" << " attack " << target << " at range, causing " << "<damage>" << " points of damage." << std::endl;
}

void		FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << "<name>" << " attack " << target << " at melee, causing " << "<damage>" << " points of damage." << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4G-TP " << "<name>" << " taking " << amount << " points of damage at armor." << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << "<name>" << " is repaired." << std::endl;
}
