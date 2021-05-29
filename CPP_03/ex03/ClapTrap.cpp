#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::string quotes[] = {"There's more to learn!", "Let me teach you the ways of magic!", "I got quests!", "Magic waits for no one, apprentice!"};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 4] << "\"" << RESET RESET << std::endl;
	std::cout << ITALIC << "\t\t\t\t\t\tNAME(" << name << RESET ITALIC << ")\tHP("<< hitPoints << ")\tEP(" << energyPoints << ")\tLVL(" << level << ")\tARMOR(" << armorAttackReduction << ")" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string valueName)
{
	name = valueName;
	hitPoints = 200;
	maxHitPoints = 200;
	energyPoints = 200;
	maxEnergyPoints = 200;
	level = 1;
	meleeAttackDamage = 60;
	rangedAttackDamage = 40;
	armorAttackReduction = 10;
	std::string quotes[] = {"There's more to learn!", "Let me teach you the ways of magic!", "I got quests!", "Magic waits for no one, apprentice!", "She has arrived!", "Who wants to make some money, eh?", "The average earnings of this planet just octopled!", "I'm in a hurry!"};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 8] << "\"" << RESET RESET << std::endl << std::endl;
	std::cout << ITALIC << "\t\t\t\t\t\t* ROBOT IS CREATED *" << RESET << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::string quotes[] = {"Ahem, ahem. What's going on? Did I break something?", "Yessss, look into my eyes. You're getting sleepy. You're getting... zzzzzz... Zzzzzz...", "Success! My spell to make you want to hang out with me worked!", "Badass! ... Or, whatever you call them.", "Very large pleasant incoming!", "My gun's empty, bring me another!", "Cracking!", "A critical!", "Brilliant!"};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 9] << "\"" << RESET RESET << std::endl;
	
}

ClapTrap::ClapTrap(const ClapTrap &copy) : name(copy.name), hitPoints(copy.hitPoints), maxHitPoints(copy.maxHitPoints), energyPoints(copy.energyPoints), maxEnergyPoints(copy.maxEnergyPoints), level(copy.energyPoints), meleeAttackDamage(copy.rangedAttackDamage), armorAttackReduction(copy.armorAttackReduction)
{
	std::string quotes[] = {"Are you ready to fight with clone?", "I have two robot arms!", "I have an IDEA!", "Resequencing combat protocols!", "What will he do next?", "I'm pulling tricks outta my hat!", "It's happening... it's happening!"};
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 7] << "\"" << RESET RESET << std::endl;
	std::cout << ITALIC << "\t\t\t\t\t\t* CLONE IS CREATED *" << RESET << std::endl;
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
		std::cout << ITALIC << "\t\t\t\t\t\t* EP are not enough for ranged attack *" << RESET << std::endl;
	else {
		std::string	quotes[] = {"Hocus pocus!", "Away with thee!", "Ahhh!", "RUN FOR YOUR LIIIIIVES!!!", "Ha-HA!", "Oh, he's big... REALLY big!", "Cryo me a river!", "Present for you!", "Eat bomb, baddie!", "Princess - you are in wrong neighberhood", "Hold my beer...", "Peaches, I like peaches.", "Avada Kedavra!", "Like a butter", "Looked painful."};
		energyPoints = (energyPoints - rangedAttackDamage < 0) ? 0 : (energyPoints - rangedAttackDamage);
		std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 15] << "\"" << RESET RESET << std::endl;
		std::cout << ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " attack " << RED << target << RESET ITALIC << " at range, causing " << rangedAttackDamage << " damage points *"  << RESET << std::endl;
	}
}

void		ClapTrap::meleeAttack(std::string const &target)
{
	if (energyPoints - rangedAttackDamage < 0)
		std::cout << ITALIC << "\t\t\t\t\t\t* EP are not enough for ranged attack *" << RESET << std::endl;
	else {
		std::string	quotes[] = {"Ready for the PUNCHline?!", "This is why you do your homework!", "Guess who?", "Pain school is now in session.", "Meet professor punch!", "Bad guy go boom!", "Hot potato!", "What a waste of everyone's time!", "I'm too bloody good!", "The bitch is back!", "Anyone else care for some?", "You'll have to try harder than that!"};
		energyPoints = (energyPoints - meleeAttackDamage < 0) ? 0 : (energyPoints - meleeAttackDamage);
		std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 12] << "\"" << RESET RESET << std::endl;
		std::cout << ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " attack " << RED << target << RESET ITALIC << " at melee, causing " << meleeAttackDamage << " damage points *" << RESET << std::endl;
	}
}

void		ClapTrap::takeDamage(unsigned int amount)
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
		std::string	quotes[] = {"Oh no, Badass!", "Why do I even feel pain?!", "Brrh... So cold... brrh...", "Extra ouch!", "My robotic flesh! AAHH!", "Why did they build me out of galvanized flesh?!", "JESUS CHRIST!", "Can't... move!", "Oh, hell.", "Afraid I've run out of... oz...", "Woah! Oh! Jeez!"};
		std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 11] << "\"" << RESET RESET << std::endl;
		std::cout << ITALIC "\t\t\t\t\t\t* FR4G-TP " RESET << name << ITALIC << " taking -" << amount << " HP *" << RESET << std::endl;
		hitPoints -= (amount - armorAttackReduction);
		std::cout << ITALIC << "\t\t\t\t\t\tNAME(" << name << RESET ITALIC << ")\tHP("<< hitPoints << ")\tEP(" << energyPoints << ")\tLVL(" << level << ")\tARMOR(" << armorAttackReduction << ")" << RESET << std::endl;
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::string quotes[] = {"Health! Eww, what flavor is red?", "Health over here!", "Sweet life juice!", "I found health!", "Healsies!", "Medicine!", "A cure for all ailments!", "Spotted a healing syringe!", "Anyone in need of healing?", "Health!"};

	int random = rand() % 2;
	std::cout << name << ITALIC BOLD << " : \"" << quotes[rand() % 10] << "\"" << RESET << std::endl;
	std::cout << GREEN ITALIC << "\t\t\t\t\t\t* SPOTTING HEALTH! *" << RESET;
	std::cout << ITALIC << " FR4G-TP " RESET << name << ITALIC << " taking +" << amount << " HP *" << RESET << std::endl;
	hitPoints = (hitPoints + amount > maxHitPoints) ? maxHitPoints : (hitPoints + amount);
	energyPoints = (energyPoints + amount > maxEnergyPoints) ? maxEnergyPoints : (energyPoints + amount);
	std::cout << ITALIC << "\t\t\t\t\t\tNAME(" << name << RESET ITALIC << ")\tHP("<< hitPoints << ")\tEP(" << energyPoints << ")\tLVL(" << level << ")\tARMOR(" << armorAttackReduction << ")" << RESET << std::endl;
}

void	ClapTrap::randomActionQuotes(std::string enemyName)
{
	std::string quotes[] = {"Wheeeee!", "Yahooooo!", "Aaaaaaahhh!", "Watch as we observe the rare and beautiful Clappy Bird!", "I'm flying! I'm really flying!", "Look out below!", "Yipe!", "Yikes!", "Yeehaw!"};
	std::cout << ITALIC BOLD RED << enemyName << RESET ITALIC BOLD << " : \"" << quotes[rand() % 9] << "\"" << RESET << std::endl;

}
