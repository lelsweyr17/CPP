#include "easyfind.hpp"

int main() {
	srand(time(NULL));
	std::cout << "<<<<<VECTOR>>>>>" << std::endl;
	{
		std::vector<int> vactor;
		int random = rand() % 10;

		std::cout << "RANDOM: { ";
		for (int i = 0; i < 10; i++) {
			vactor.push_back(rand() % 10);
			std::cout << vactor[i];
			if (i < 9)
				std::cout << ", ";
		}
		std::cout << " };" << std::endl;
		std::cout << "THE WANTED: " << random << std::endl;
		std::vector<int>::const_iterator it;
		try {
			it = easyfind(vactor, random);
			std::cout << "Occurance is found!" << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "<<<<<LIST>>>>" << std::endl;
	{
		std::list<int> list;
		int random = rand() % 10;

		std::cout << "RANDOM: { ";
		for (int i = 0; i < 10; i++) {
			list.push_back(rand() % 10);
			std::cout << list.back();
			if (i < 9)
				std::cout << ", ";
		}
		std::cout << " };" << std::endl;
		std::cout << "THE WANTED: " << random << std::endl;
		std::list<int>::const_iterator it;
		try {
			it = easyfind(list, random);
			std::cout << "Occurance is found!" << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "<<<<<DEQUE>>>>" << std::endl;
	{
		std::deque<int> deque;
		int random = rand() % 10;

		std::cout << "RANDOM: { ";
		for (int i = 0; i < 10; i++) {
			deque.push_back(rand() % 10);
			std::cout << deque.back();
			if (i < 9)
				std::cout << ", ";
		}
		std::cout << " };" << std::endl;
		std::cout << "THE WANTED: " << random << std::endl;
		std::deque<int>::const_iterator it;
		try {
			it = easyfind(deque, random);
			std::cout << "Occurance is found!" << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}