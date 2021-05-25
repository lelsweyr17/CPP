#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string.h>
# include "Brain.hpp"

class Human
{
private:
    Brain _brain;
    
public:
    Human();
    ~Human();

    Brain   *identify();
    Brain   &getBrain();
};

#endif