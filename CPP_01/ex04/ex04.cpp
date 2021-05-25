#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *pointer;
	std::string &link = string;

	pointer = &string;
	std::cout << "Pointer:\t" << *pointer << std::endl;
	std::cout << "Link:\t\t" << link << std::endl;
	return 0;
}