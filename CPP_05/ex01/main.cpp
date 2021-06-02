#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat  armen("Armen", 152);
	Bureaucrat  koko("Koko", 99);
	Bureaucrat  loli("Loli", 1);
	Bureaucrat  kiki("Kiki", 0);

	Form		one("One", 100, 100);
	Form		two("Two", 2, 1);

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

	loli.signForm(one);
	one.beSigned(koko);
	two.beSigned(loli);
	koko.signForm(two);

	return 0;
}