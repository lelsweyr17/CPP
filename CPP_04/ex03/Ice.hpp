#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
#include "ICharacter.hpp"

class Ice : public AMateria {
	public:
		Ice();
		~Ice();
		Ice(std::string const &type);
		Ice(const Ice&);
		Ice& operator=(const Ice&);

		AMateria*	clone() const;
		void		use(ICharacter& target);

};

#endif