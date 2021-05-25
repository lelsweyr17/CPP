#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

Brain *Human::identify()
{
	return &_brain;
}

Brain &Human::getBrain()
{
	return _brain;
}