#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern& copy) {
	operator=(copy);
}

Intern&	Intern::operator=(const Intern& intern) {
	return *this;
}

const char *Intern::FormIsNotFound::what() const throw() {
	return "Form is not found.";
}

Form	*createPresidentialPardonForm(std::string target) {
	return new PresidentialPardonForm(target);
}

Form	*createRobotomyRequestForm(std::string target) {
	return new RobotomyRequestForm(target);
}

Form	*createShrubberyCreationForm(std::string target) {
	return new ShrubberyCreationForm(target);
}

Form	*Intern::makeForm(std::string name, std::string target) const {
	try {
		std::string types[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
		Form *(*form[3])(std::string target);
		form[0] = &createPresidentialPardonForm;
		form[1] = &createRobotomyRequestForm;
		form[2] = &createShrubberyCreationForm;

		for (int i = 0; i < 3; i++) {
			if (name == types[i]) {
				std::cout << "Intern creates " << name << "." << std::endl;
				return (form[i](target));
			}
		}
		throw Intern::FormIsNotFound();
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return 0;
}