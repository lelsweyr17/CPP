#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy {
	public:
		SuperMutant();
		~SuperMutant();
		SuperMutant(int hp, std::string const & type);
		SuperMutant(const SuperMutant& copy);
		SuperMutant& operator=(const SuperMutant& superMutant);

        virtual void    takeDamage(int);
};

#endif