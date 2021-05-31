#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "Character.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource&);
		MateriaSource& operator=(const MateriaSource&);

		virtual void		learnMateria(AMateria*);
		virtual AMateria*	createMateria(std::string const &type);

	private:
		AMateria	*source[4];
		int			count;
};

#endif 