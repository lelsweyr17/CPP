#include "span.hpp"

int main()
{
	srand(time(NULL));
	std::cout << "\t* case 1 *" << std::endl;
	{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		try {
			std::cout << "Shortest:\t" << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		try {
			std::cout << "Longest:\t" << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	std::cout << "\t* case 2 *" << std::endl;
	{
		Span sp = Span(10000);
		std::vector <int> ar;

		for (int i = 0; i < 10500; i++) {
			ar.push_back(i);
		}
		try
		{
			sp.addNumber(ar.begin(), ar.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try {
			std::cout << "Shortest:\t" << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		try {
			std::cout << "Longest:\t" << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	std::cout << "\t* case 3 *" << std::endl;
	{
		Span sp = Span(10);

		sp.addNumber(9);

		try {
			std::cout << "Shortest:\t" << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		try {
			std::cout << "Longest:\t" << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		
	}
	std::cout << std::endl;
	std::cout << "\t* case 4 *" << std::endl;
	{
		Span sp = Span(0);

		try {
			std::cout << "Shortest:\t" << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		try {
			std::cout << "Longest:\t" << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		
	}
}