#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

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

	private:
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	maxHitPoints;
		unsigned int	energyPoints;
		unsigned int	maxEnergyPoints;
		unsigned int	level;
		unsigned int	meleeAttackDamage;
		unsigned int	rangedAttackDamage;
		unsigned int	armorAttackReduction;
};

#endif