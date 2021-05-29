#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define WHITE		"\x1b[37m"
# define RESET		"\x1b[0m"
# define ITALIC		"\e[3m"
# define BOLD		"\e[1m"
# define RESET_FONT	"\e[0m"

class FragTrap {
	public:
		FragTrap();
		~FragTrap();
		FragTrap(std:: string name);
		FragTrap(const FragTrap& fragTrap);
		FragTrap& operator=(const FragTrap& fragTrap);

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	randomActionQuotes(std::string enemyName);
		void	vaulthunter_dot_exe(std::string const &target);

	private:
		std::string		name;
		int	hitPoints;
		int	maxHitPoints;
		int	energyPoints;
		int	maxEnergyPoints;
		int	level;
		int	meleeAttackDamage;
		int	rangedAttackDamage;
		int	armorAttackReduction;
};

#endif