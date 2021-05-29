#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
	public:
		SuperTrap();
		~SuperTrap();
		SuperTrap(std::string);
		SuperTrap(const SuperTrap& superTrap);
		SuperTrap& operator=(const SuperTrap& superTrap);
};

#endif