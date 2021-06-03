#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	srand(time(NULL));
	Bureaucrat  armen("Armen", 152);
	Bureaucrat  koko("Koko", 75);
	Bureaucrat  loli("Loli", 1);
	Bureaucrat  kiki("Kiki", 0);

	Form *one = new PresidentialPardonForm("PPF");
	Form *two = new RobotomyRequestForm("RRF");
	Form *three = new ShrubberyCreationForm("SCF");

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

	std::cout << std::endl;
	loli.signForm (*one);
	std::cout << std::endl;
	three->beSigned(loli);
	std::cout << std::endl;
	koko.signForm(*three);

	std::cout << std::endl;
	loli.executeForm(*one);
	std::cout << std::endl;
	koko.executeForm(*one);
	std::cout << std::endl;
	two->beSigned(loli);
	std::cout << std::endl;
	two->execute(loli);
	std::cout << std::endl;
	three->execute(loli);
	std::cout << std::endl;

	return 0;
}