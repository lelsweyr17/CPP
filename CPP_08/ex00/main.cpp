#include "easyfind.hpp"

int main() {
	srand(time(NULL));
	std::vector<int> array;
	int random = rand() % 10;

	std::cout << "RANDOM: { ";
	for (int i = 0; i < 10; i++) {
		array.push_back(rand() % 10);
		std::cout << array[i];
		if (i < 9)
			std::cout << ", ";
	}
	std::cout << " };" << std::endl;
	std::cout << "THE WANTED: " << random << std::endl;
	std::vector<int>::const_iterator it;
	try {
		it = easyfind(array, random);
		std::cout << "Occurance is found!" << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}