#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	srand(time(NULL));
	Bureaucrat  koko("Koko", 99);
	Bureaucrat  loli("Loli", 1);
	Intern	intern;
	Form *one;
	Form *two;
	Form *three;

	one = intern.makeForm("ShrubberyCreationForm", "SCF");
	two = intern.makeForm("RobotomyRequestForm", "test");
	three = intern.makeForm("PresidentialPardonForm", "test");

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

	delete one;
	delete two;
	delete three;

	return 0;
}