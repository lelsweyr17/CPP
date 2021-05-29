#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::string quotes[] = {"There's more to learn!", "Let me teach you the ways of magic!", "I got quests!", "Magic waits for no one, apprentice!"};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 4] << "\"" << RESET_FONT RESET_FONT << std::endl << std::endl;
	std::cout << ITALIC << "\t\t\t\t\t\tNAME(" << name << RESET ITALIC << ")\tHP("<< hitPoints << ")\tEP(" << energyPoints << ")\tLVL(" << level << ")\tARMOR(" << armorAttackReduction << ")" << RESET_FONT << std::endl << std::endl;
}

ClapTrap::ClapTrap(std::string valueName, int hit, int maxHit, int energy, int maxEnergy, int lvl, int melee, int ranged, int armor) : name(valueName), hitPoints(hit), maxHitPoints(maxHit), energyPoints(energy), maxEnergyPoints(maxEnergy), level(lvl), meleeAttackDamage(melee), rangedAttackDamage(ranged), armorAttackReduction(armor)
{
	std::string quotes[] = {"There's more to learn!", "Let me teach you the ways of magic!", "I got quests!", "Magic waits for no one, apprentice!", "She has arrived!", "Who wants to make some money, eh?", "The average earnings of this planet just octopled!", "I'm in a hurry!"};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 8] << "\"" << RESET_FONT RESET_FONT << std::endl << std::endl;
	std::cout << ITALIC << "\t\t\t\t\t\tNAME(" << name << RESET ITALIC << ")\tHP("<< hitPoints << ")\tEP(" << energyPoints << ")\tLVL(" << level << ")\tARMOR(" << armorAttackReduction << ")" << RESET_FONT << std::endl << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::string quotes[] = {"Ahem, ahem. What's going on? Did I break something?", "Yessss, look into my eyes. You're getting sleepy. You're getting... zzzzzz... Zzzzzz...", "Success! My spell to make you want to hang out with me worked!", "Badass! ... Or, whatever you call them.", "Very large peasant incoming!", "My gun's empty, bring me another!", "Cracking!", "A critical!", "Brilliant!"};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 9] << "\"" << RESET_FONT RESET_FONT << std::endl << std::endl;
	
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) : name(clapTrap.name), hitPoints(clapTrap.hitPoints), maxHitPoints(clapTrap.maxHitPoints), energyPoints(clapTrap.energyPoints), maxEnergyPoints(clapTrap.maxEnergyPoints), level(clapTrap.energyPoints), meleeAttackDamage(clapTrap.rangedAttackDamage), armorAttackReduction(clapTrap.armorAttackReduction)
{
	std::cout << ITALIC << "\t\t\t\t\t\t* CREATE A CORY *" << RESET_FONT << std::endl << std::endl;
	std::cout << name << ITALIC << " : \"" << "Are you ready to fight with clone?" << "\"" << RESET_FONT << std::endl << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clapTrap)
{
	name = clapTrap.name;
	hitPoints = clapTrap.hitPoints;
	maxEnergyPoints = clapTrap.maxEnergyPoints;
	energyPoints = clapTrap.energyPoints;
	maxEnergyPoints = clapTrap.maxEnergyPoints;
	level = clapTrap.level;
	meleeAttackDamage = clapTrap.meleeAttackDamage;
	rangedAttackDamage = clapTrap.rangedAttackDamage;
	armorAttackReduction = clapTrap.armorAttackReduction;

	return *this;
}

void		ClapTrap::rangedAttack(std::string const &target)
{
	if (energyPoints - rangedAttackDamage < 0)
		std::cout << ITALIC << "\t\t\t\t\t\t* EP are not enough for ranged attack *" << RESET_FONT << std::endl << std::endl;
	else {
		std::string	quotes[] = {"Hocus pocus!", "Away with thee!", "Ahhh!", "RUN FOR YOUR LIIIIIVES!!!", "Ha-HA!", "Oh, he's big... REALLY big!", "Cryo me a river!", "Present for you!", "Eat bomb, baddie!", "Princess - you are in wrong neighberhood", "Hold my beer...", "Peaches, I like peaches.", "Avada Kedavra!", "Like a butter", "Looked painful."};
		energyPoints = (energyPoints - rangedAttackDamage < 0) ? 0 : (energyPoints - rangedAttackDamage);
		std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 15] << "\"" << RESET_FONT RESET_FONT << std::endl;
		std::cout << ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " attack " << target << " at range, causing " << rangedAttackDamage << " damage points *"  << RESET_FONT << std::endl << std::endl;
	}
}

void		ClapTrap::meleeAttack(std::string const &target)
{
	if (energyPoints - rangedAttackDamage < 0)
		std::cout << ITALIC << "\t\t\t\t\t\t* EP are not enough for ranged attack *" << RESET_FONT << std::endl << std::endl;
	else {
		std::string	quotes[] = {"Ready for the PUNCHline?!", "This is why you do your homework!", "Guess who?", "Pain school is now in session.", "Meet professor punch!", "Bad guy go boom!", "Hot potato!", "What a waste of everyone's time!", "I'm too bloody good!", "The bitch is back!", "Anyone else care for some?", "You'll have to try harder than that!"};
		energyPoints = (energyPoints - meleeAttackDamage < 0) ? 0 : (energyPoints - meleeAttackDamage);
		std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 12] << "\"" << RESET_FONT RESET_FONT << std::endl;
		std::cout << ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " attack " << target << " at melee, causing " << meleeAttackDamage << " damage points *" << RESET_FONT << std::endl << std::endl;
	}
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints - (amount - armorAttackReduction) <= 0)
	{
		std::cout << ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " taking -" << amount << " HP *" << RESET_FONT << std::endl;
		std::cout << name << ITALIC BOLD << " : \"" << "KHHHHHHRRRR.....\"" << RESET_FONT RESET_FONT << std::endl;
		hitPoints = 0;
		armorAttackReduction = 0;
		std::cout << ITALIC << "\t\t\t\t\t\tNAME(" << name << RESET ITALIC << ")\tHP("<< hitPoints << ")\tEP(" << energyPoints << ")\tLVL(" << level << ")\tARMOR(" << armorAttackReduction << ")" << RESET_FONT << std::endl << std::endl;
		std::cout << ITALIC << "\t\t * " << name << " IS DEAD *" << RESET ITALIC << std::endl << std::endl;
		exit(0);
	}
	else
	{
		std::string	quotes[] = {"Oh no, Badass!", "Why do I even feel pain?!", "Brrh... So cold... brrh...", "Extra ouch!", "My robotic flesh! AAHH!", "Why did they build me out of galvanized flesh?!", "JESUS CHRIST!", "Can't... move!", "Oh, hell.", "Afraid I've run out of... oz...", "Woah! Oh! Jeez!"};
		std::cout << ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " taking -" << amount << " HP *" << RESET_FONT << std::endl;
		std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 11] << "\"" << RESET_FONT RESET_FONT << std::endl;
		hitPoints -= (amount - armorAttackReduction);
		std::cout << ITALIC << "\t\t\t\t\t\tNAME(" << name << RESET ITALIC << ")\tHP("<< hitPoints << ")\tEP(" << energyPoints << ")\tLVL(" << level << ")\tARMOR(" << armorAttackReduction << ")" << RESET_FONT << std::endl << std::endl;
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::string quotes[] = {"Health! Eww, what flavor is red?", "Health over here!", "Sweet life juice!", "I found health!", "Healsies!", "Medicine!", "A cure for all ailments!", "Spotted a healing syringe!", "Anyone in need of healing?", "Health!"};

	int random = rand() % 2;
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 10] << "\"" << RESET_FONT RESET_FONT << std::endl;
	std::cout << GREEN ITALIC << "\t\t\t\t\t\t* SPOTTING HEALTH! *" << RESET_FONT RESET;
	std::cout << ITALIC << " FR4G-TP " RESET << name << ITALIC << " taking +" << amount << " HP *" << RESET_FONT << std::endl;
	hitPoints = (hitPoints + amount > 100) ? 100 : (hitPoints + amount);
	energyPoints = (energyPoints + amount > 100) ? 100 : (energyPoints + amount);
	armorAttackReduction = (armorAttackReduction + random >= 5) ? 5 : armorAttackReduction + random;
	std::cout << ITALIC << "\t\t\t\t\t\tNAME(" << name << RESET ITALIC << ")\tHP("<< hitPoints << ")\tEP(" << energyPoints << ")\tLVL(" << level << ")\tARMOR(" << armorAttackReduction << ")" << RESET_FONT << std::endl << std::endl;
}

void	ClapTrap::randomActionQuotes(std::string enemyName)
{
	std::string quotes[] = {"Wheeeee!", "Yahooooo!", "Aaaaaaahhh!", "Watch as we observe the rare and beautiful Clappy Bird!", "I'm flying! I'm really flying!", "Look out below!", "Yipe!", "Yikes!", "Yeehaw!"};
	std::cout << ITALIC BOLD RED << enemyName << RESET_FONT RESET_FONT RESET ITALIC BOLD << " : \"" << quotes[rand() % 9] << "\"" << RESET_FONT RESET_FONT << std::endl << std::endl;

}
