#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define WHITE		"\x1b[37m"
# define ITALIC		"\e[3m"
# define BOLD		"\e[1m"
# define RESET		"\e[0m"

class ScavTrap {
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std:: string name);
		ScavTrap(const ScavTrap& scavTrap);
		ScavTrap& operator=(const ScavTrap& scavTrap);

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	randomActionQuotes(std::string enemyName);
		void	challengeNewcomer(std::string const &target);
	
	private:
		std::string		name;
		int				hitPoints;
		int				maxHitPoints;
		int				energyPoints;
		int				maxEnergyPoints;
		int				level;
		int				meleeAttackDamage;
		int				rangedAttackDamage;
		int				armorAttackReduction;
};

#endif