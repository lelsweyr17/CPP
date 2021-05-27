#include "Human.hpp"

int main()
{
	Human mency;

	std::cout << mency.identify() << std::endl;
	std::cout << mency.getBrain().identify() << std::endl;
	return 0;
}