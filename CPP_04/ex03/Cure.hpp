#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
#include "ICharacter.hpp"

class Cure : public AMateria {
	public:
		Cure();
		~Cure();
		Cure(std::string const &type);
		Cure(const Cure&);
		Cure& operator=(const Cure&);

		AMateria*	clone() const;
		void		use(ICharacter& target);

};

#endif