#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap("Anonymous"), FragTrap(), NinjaTrap()
{
}

SuperTrap::SuperTrap(std::string valueName) : ClapTrap(valueName), FragTrap(), NinjaTrap()
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

SuperTrap::~SuperTrap()
{
	
}

SuperTrap::SuperTrap(const SuperTrap &copy) : ClapTrap(copy), FragTrap(), NinjaTrap()
{
}