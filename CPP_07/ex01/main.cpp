#include "iter.hpp"

int main() {
	double array1[] = {123.234, 456456.2, 77.777, 450.00};
	::iter(array1, 4, f);
	std::cout << std::endl;
	
	std::string	array2[] = {"abc", "def", "ghi", "jkl", "mno"};
	::iter(array2, 5, f);
	std::cout << std::endl;

	int array3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	::iter(array3, 9, f);
	std::cout << std::endl;

	char array4[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	::iter(array4, 26, f);
	return 0;
}