#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat  armen("Armen", 152);
	Bureaucrat  koko("Koko", 99);
	Bureaucrat  loli("Loli", 1);
	Bureaucrat  kiki("Kiki", 0);

	std::cout << koko << std::endl << std::endl;
	std::cout << loli << std::endl << std::endl;

	loli.incrementingAGrade();
	std::cout << loli << std::endl << std::endl;
	koko.incrementingAGrade();
	std::cout << koko << std::endl << std::endl;
	loli.decrementingAGrade();
	std::cout << loli << std::endl << std::endl;
	koko.decrementingAGrade();
	std::cout << koko << std::endl << std::endl;
}