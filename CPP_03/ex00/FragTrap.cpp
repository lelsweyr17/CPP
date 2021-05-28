#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::string quotes[] = {"There's more to learn!", "Let me teach you the ways of magic!", "I got quests!", "Magic waits for no one, apprentice!"};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 4] << "\"" << RESET_FONT RESET_FONT << std::endl << std::endl;
	std::cout << ITALIC << "\t\t\t\t\t\tNAME(" << name << RESET ITALIC << ")\tHP("<< hitPoints << ")\tEP(" << energyPoints << ")\tLVL(" << level << ")\tARMOR(" << armorAttackReduction << ")" << RESET_FONT << std::endl << std::endl;
}

FragTrap::FragTrap(std:: string valueName) : name(valueName), hitPoints(100), maxHitPoints(100), energyPoints(100), maxEnergyPoints(100), level(1), meleeAttackDamage(30), rangedAttackDamage(20), armorAttackReduction(5)
{
	std::string quotes[] = {"There's more to learn!", "Let me teach you the ways of magic!", "I got quests!", "Magic waits for no one, apprentice!"};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 4] << "\"" << RESET_FONT RESET_FONT << std::endl << std::endl;
	std::cout << ITALIC << "\t\t\t\t\t\tNAME(" << name << RESET ITALIC << ")\tHP("<< hitPoints << ")\tEP(" << energyPoints << ")\tLVL(" << level << ")\tARMOR(" << armorAttackReduction << ")" << RESET_FONT << std::endl << std::endl;
}

FragTrap::~FragTrap()
{
	std::string quotes[] = {"Ahem, ahem. What's going on? Did I break something?", "Yessss, look into my eyes. You're getting sleepy. You're getting... zzzzzz... Zzzzzz...", "Success! My spell to make you want to hang out with me worked!"};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 3] << "\"" << RESET_FONT RESET_FONT << std::endl << std::endl;
	
}

FragTrap::FragTrap(const FragTrap &fragTrap) : name(fragTrap.name), hitPoints(fragTrap.hitPoints), maxHitPoints(fragTrap.maxHitPoints), energyPoints(fragTrap.energyPoints), maxEnergyPoints(fragTrap.maxEnergyPoints), level(fragTrap.energyPoints), meleeAttackDamage(fragTrap.rangedAttackDamage), armorAttackReduction(fragTrap.armorAttackReduction)
{
	std::cout << ITALIC << "\t\t\t\t\t\t* CREATE CORY FRAGTRAP *" << RESET_FONT << std::endl << std::endl;
	std::cout << name << ITALIC << " : \"" << "Are you ready to fight with clone?" << "\"" << RESET_FONT << std::endl << std::endl;
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

void		FragTrap::rangedAttack(std::string const &target)
{
	if (energyPoints - rangedAttackDamage < 0)
		std::cout << ITALIC << "\t\t\t\t\t\t* EP are not enough for ranged attack *" << RESET_FONT << std::endl << std::endl;
	else {
		std::string	quotes[] = {"Hocus pocus!", "Away with thee!", "Ahhh!", "RUN FOR YOUR LIIIIIVES!!!", "Ha-HA!", "Oh, he's big... REALLY big!", "Cryo me a river!", "Present for you!", "Eat bomb, baddie!"};
		energyPoints = (energyPoints - rangedAttackDamage < 0) ? 0 : (energyPoints - rangedAttackDamage);
		std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 9] << "\"" << RESET_FONT RESET_FONT << std::endl;
		std::cout << ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " attack " << target << " at range, causing " << rangedAttackDamage << " damage points *"  << RESET_FONT << std::endl << std::endl;
	}
}

void		FragTrap::meleeAttack(std::string const &target)
{
	if (energyPoints - rangedAttackDamage < 0)
		std::cout << ITALIC << "\t\t\t\t\t\t* EP are not enough for ranged attack *" << RESET_FONT << std::endl << std::endl;
	else {
		std::string	quotes[] = {"Ready for the PUNCHline?!", "This is why you do your homework!", "Guess who?", "Pain school is now in session.", "Meet professor punch!", "Bad guy go boom!", "Hot potato!"};
		energyPoints = (energyPoints - meleeAttackDamage < 0) ? 0 : (energyPoints - meleeAttackDamage);
		std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 7] << "\"" << RESET_FONT RESET_FONT << std::endl;
		std::cout << ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " attack " << target << " at melee, causing " << meleeAttackDamage << " damage points *" << RESET_FONT << std::endl << std::endl;
	}
}

void		FragTrap::takeDamage(unsigned int amount)
{
	int random = 5 - armorAttackReduction;
	if (hitPoints - ((random > 0) ? (amount + rand() % random) : amount) <= 0)
	{
		std::cout << ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " taking -" << amount << " HP *" << RESET_FONT << std::endl;
		std::cout << name << ITALIC BOLD << " : \"" << "KHHHHHHRRRR.....\"" << RESET_FONT RESET_FONT << std::endl;
		hitPoints = 0;
		armorAttackReduction = 0;
		std::cout << ITALIC << "\t\t\t\t\t\tNAME(" << name << RESET ITALIC << ")\tHP("<< hitPoints << ")\tEP(" << energyPoints << ")\tLVL(" << level << ")\tARMOR(" << armorAttackReduction << ")" << RESET_FONT << std::endl << std::endl;
		std::cout << "\t\t * " << name << " IS DEAD *" << std::endl << std::endl;
		exit(0);
	}
	else
	{
		std::string	quotes[] = {"Oh no, Badass!", "Why do I even feel pain?!", "Brrh... So cold... brrh...", "Extra ouch!", "My robotic flesh! AAHH!", "Why did they build me out of galvanized flesh?!", "JESUS CHRIST!"};
		std::cout << ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " taking -" << amount << " HP *" << RESET_FONT << std::endl;
		std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 7] << "\"" << RESET_FONT RESET_FONT << std::endl;
		hitPoints -= (random > 0) ? (amount + rand() % random) : amount;
		armorAttackReduction = (armorAttackReduction - 1 == 0) ? 0 : armorAttackReduction--;
		std::cout << ITALIC << "\t\t\t\t\t\tNAME(" << name << RESET ITALIC << ")\tHP("<< hitPoints << ")\tEP(" << energyPoints << ")\tLVL(" << level << ")\tARMOR(" << armorAttackReduction << ")" << RESET_FONT << std::endl << std::endl;
	}
}

void		FragTrap::beRepaired(unsigned int amount)
{
	std::string quotes[] = {"Health! Eww, what flavor is red?", "Health over here!", "Sweet life juice!", "I found health!", "Healsies!"};

	int random = rand() % 2;
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 5] << "\"" << RESET_FONT RESET_FONT << std::endl;
	std::cout << GREEN ITALIC << "\t\t\t\t\t\t* SPOTTING HEALTH! *" << RESET_FONT RESET;
	std::cout << ITALIC << " FR4G-TP " RESET << name << ITALIC << " taking +" << amount << " HP *" << RESET_FONT << std::endl;
	hitPoints = (hitPoints + amount > 100) ? 100 : (hitPoints + amount);
	energyPoints = (energyPoints + amount > 100) ? 100 : (energyPoints + amount);
	armorAttackReduction = (armorAttackReduction + random >= 5) ? 5 : armorAttackReduction + random;
	std::cout << ITALIC << "\t\t\t\t\t\tNAME(" << name << RESET ITALIC << ")\tHP("<< hitPoints << ")\tEP(" << energyPoints << ")\tLVL(" << level << ")\tARMOR(" << armorAttackReduction << ")" << RESET_FONT << std::endl << std::endl;
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

void	FragTrap::randomActionQuotes(std::string enemyName)
{
	std::string quotes[] = {"Wheeeee!", "Yahooooo!", "Aaaaaaahhh!", "Watch as we observe the rare and beautiful Clappy Bird!", "I'm flying! I'm really flying!", "Look out below!", "Yipe!", "Yikes!", "Yeehaw!"};
	std::cout << YELLOW ITALIC BOLD << enemyName << " : \"" << quotes[rand() % 9] << "\"" << RESET_FONT RESET_FONT RESET << std::endl << std::endl;

}
