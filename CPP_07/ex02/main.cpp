#include "Array.hpp"

int main() {
	Array <int> a;
	Array <float> b(7);
	Array <std::string> c(4);

	std::cout << std::endl;
	try {
		std::cout << "a[0] = " << a[0] << std::endl << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		std::cout << "b[1] = " << b[1] << std::endl << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		std::cout << "before: b[0] = " << b[0] << std::endl;
		b[0] = 1.2312;
		std::cout << "after: b[0] = " << b[0] << std::endl << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		std::cout << "b[10] = " << b[10] << std::endl << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		std::cout << "c[-1] = " << c[-1] << std::endl << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		std::cout << "before: c[1] = '" << c[1] << "'" << std::endl << std::endl;
		c[1] = "abcde";
		std::cout << "after: c[1] = '" << c[1] << "'" << std::endl << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}