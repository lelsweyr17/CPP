#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
// # include "ICharacter.hpp"

class AMateria {
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria&);
		AMateria& operator=(const AMateria&);

		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		// virtual void use(ICharacter& target);

	protected:
		std::string		type;
		unsigned int	xp;
};

#endif 