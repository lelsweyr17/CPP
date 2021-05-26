#include "Replace.hpp"

int main()
{
	std::string	filename = "test";
	std::string	s1 = "replace";
	std::string	s2 = "[REPLACE]";

	replace(filename, s1, s2);
	return 0;
}