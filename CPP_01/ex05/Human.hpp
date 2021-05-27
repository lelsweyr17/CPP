#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string.h>
# include "Brain.hpp"

class Human {
	public:
		Human();
		~Human();

		Brain   *identify();
		Brain   &getBrain();

	private:
		Brain   _brain;
};

#endif