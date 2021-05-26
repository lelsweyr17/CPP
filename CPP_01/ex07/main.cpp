#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
	 	std::cout << "Uncorrect number of args" << std::endl;
		return 0;
	}
	if (!argv[1] || !argv[2] || !argv[3])
	{
		std::cout << "One of argument is empty" << std::endl;
		return 0;
	}
	replace(argv[1], argv[2], argv[3]);
	return 0;
}