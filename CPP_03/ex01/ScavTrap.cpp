#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::string quotes[] = {"She has arrived!", "Who wants to make some money, eh?", "The average earnings of this planet just octopled!", "I'm in a hurry!"};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 4] << "\"" << RESET << std::endl;
	std::cout << ITALIC << "\t\t\t\t\t\tNAME(" << name << RESET ITALIC << ")\tHP("<< hitPoints << ")\tEP(" << energyPoints << ")\tLVL(" << level << ")\tARMOR(" << armorAttackReduction << ")" << RESET << std::endl;
}

ScavTrap::ScavTrap(std:: string valueName) : name(valueName), hitPoints(100), maxHitPoints(100), energyPoints(100), maxEnergyPoints(100), level(1), meleeAttackDamage(30), rangedAttackDamage(20), armorAttackReduction(5)
{
	std::string quotes[] = {"She has arrived!", "Who wants to make some money, eh?", "The average earnings of this planet just octopled!", "I'm in a hurry!"};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 4] << "\"" << RESET << std::endl;
	std::cout << ITALIC << "\t\t\t\t\t\tNAME(" << name << RESET ITALIC << ")\tHP("<< hitPoints << ")\tEP(" << energyPoints << ")\tLVL(" << level << ")\tARMOR(" << armorAttackReduction << ")" << RESET << std::endl;
	std::cout << ITALIC << "\t\t\t\t\t\t* ROBOT IS CREATED *" << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::string quotes[] = {"Badass! ... Or, whatever you call them.", "Very large peasant incoming!", "My gun's empty, bring me another!", "Cracking!", "A critical!", "Brilliant!"};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 6] << "\"" << RESET << std::endl;
	
}

ScavTrap::ScavTrap(const ScavTrap &copy) : name(copy.name), hitPoints(copy.hitPoints), maxHitPoints(copy.maxHitPoints), energyPoints(copy.energyPoints), maxEnergyPoints(copy.maxEnergyPoints), level(copy.energyPoints), meleeAttackDamage(copy.rangedAttackDamage), armorAttackReduction(copy.armorAttackReduction)
{
	std::cout << "\t\t\t\t\t\t* CREATE CORY SCAVTRAP *" << std::endl;
	std::cout << name << ITALIC << " : \"" << "YEEEAH. I'm finally here...." << "\"" << RESET << std::endl;
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

void		ScavTrap::rangedAttack(std::string const &target)
{
	if (energyPoints - rangedAttackDamage < 0)
		std::cout << ITALIC << "\t\t\t\t\t\t* EP are not enough for ranged attack *" << RESET << std::endl;
	else {
		std::string	quotes[] = {"Princess - you are in wrong neighberhood", "Hold my beer...", "Peaches, I like peaches.", "Avada Kedavra!", "Like a butter", "Looked painful."};
		energyPoints = (energyPoints - rangedAttackDamage < 0) ? 0 : (energyPoints - rangedAttackDamage);
		std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 6] << "\"" << RESET << std::endl;
		std::cout << ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " attack " << target << " at range, causing " << rangedAttackDamage << " damage points *"  << RESET << std::endl;
	}
}

void		ScavTrap::meleeAttack(std::string const &target)
{
	if (energyPoints - rangedAttackDamage < 0)
		std::cout << ITALIC << "\t\t\t\t\t\t* EP are not enough for ranged attack *" << RESET << std::endl;
	else {
		std::string	quotes[] = {"What a waste of everyone's time!", "I'm too bloody good!", "The bitch is back!", "Anyone else care for some?", "You'll have to try harder than that!"};
		energyPoints = (energyPoints - meleeAttackDamage < 0) ? 0 : (energyPoints - meleeAttackDamage);
		std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 5] << "\"" << RESET << std::endl;
		std::cout << ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " attack " << target << " at melee, causing " << meleeAttackDamage << " damage points *" << RESET << std::endl;
	}
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	if (hitPoints - (amount - armorAttackReduction) <= 0)
	{
		std::cout << ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " taking -" << amount << " HP *" << RESET << std::endl;
		std::cout << name << ITALIC BOLD << " : \"" << "KHHHHHHRRRR.....\"" << RESET << std::endl;
		hitPoints = 0;
		armorAttackReduction = 0;
		std::cout << ITALIC << "\t\t\t\t\t\tNAME(" << name << RESET ITALIC << ")\tHP("<< hitPoints << ")\tEP(" << energyPoints << ")\tLVL(" << level << ")\tARMOR(" << armorAttackReduction << ")" << RESET << std::endl;
		std::cout << ITALIC << "\t\t * " << name << " IS DEAD *" << RESET ITALIC << std::endl;
		exit(0);
	}
	else
	{
		std::string	quotes[] = {"Oh no, Badass!", "Why do I even feel pain?!", "Brrh... So cold... brrh...", "Extra ouch!", "My robotic flesh! AAHH!", "Why did they build me out of galvanized flesh?!", "JESUS CHRIST!"};
		std::cout << ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " taking -" << amount << " HP *" << RESET << std::endl;
		std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 7] << "\"" << RESET << std::endl;
		hitPoints -= (amount - armorAttackReduction);
		std::cout << ITALIC << "\t\t\t\t\t\tNAME(" << name << RESET ITALIC << ")\tHP("<< hitPoints << ")\tEP(" << energyPoints << ")\tLVL(" << level << ")\tARMOR(" << armorAttackReduction << ")" << RESET << std::endl;
	}
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	std::string quotes[] = {"Medicine!", "A cure for all ailments!", "Spotted a healing syringe!", "Anyone in need of healing?", "Health!"};
	int random = rand() % 2;
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 5] << "\"" << RESET << std::endl;
	std::cout << GREEN ITALIC << "\t\t\t\t\t\t* SPOTTING HEALTH! *" << RESET RESET;
	std::cout << ITALIC " FR4G-TP " RESET << name << ITALIC << " taking +" << amount << " HP *" << RESET << std::endl;
	hitPoints = (hitPoints + amount > 100) ? 100 : (hitPoints + amount);
	energyPoints = (energyPoints + amount > 100) ? 100 : (energyPoints + amount);
	armorAttackReduction = (armorAttackReduction + random >= 5) ? 5 : armorAttackReduction + random;	
	std::cout << ITALIC << "\t\t\t\t\t\tNAME(" << name << RESET ITALIC << ")\tHP("<< hitPoints << ")\tEP(" << energyPoints << ")\tLVL(" << level << ")\tARMOR(" << armorAttackReduction << ")" << RESET << std::endl;

	
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	if (energyPoints < 25) {
		std::cout << ITALIC << "\t\t\t\t\t\t* EP are not enough for VaultHunter.EXE *" << RESET << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << MAGENTA ITALIC << "\t\t\t*** " RESET << name << MAGENTA ITALIC <<" activating challenge newcomer ***" << RESET << std::endl << std::endl;
	std::string quotes[] = {"This weapon feels... affordable.", "Ugh, I'll never get the smell of thrift off my hands.", "And now, to see how the other half lives.", "Absolutely disgusting!", "Was this weapon made by BABIES? By POVERTY stricken babies?!", "Gaston, more bullets!"};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 6] << "\"" << RESET << std::endl;
	energyPoints -= 25;
	std::cout << ITALIC ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " attack " << target << " with challenge newcomer *"  << RESET << std::endl;
}

void	ScavTrap::randomActionQuotes(std::string enemyName)
{
	std::string quotes[] = {"Wheeeee!", "Yahooooo!", "Aaaaaaahhh!", "Watch as we observe the rare and beautiful Clappy Bird!", "I'm flying! I'm really flying!", "Look out below!", "Yipe!", "Yikes!", "Yeehaw!"};
	std::cout << YELLOW ITALIC BOLD << enemyName  << RESET ITALIC BOLD << " : \"" << quotes[rand() % 9] << "\"" << RESET << std::endl;
}