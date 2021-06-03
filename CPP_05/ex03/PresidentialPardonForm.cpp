#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5) {
	this->target = target;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	try {
		if (getIsSigned() && executor.getGrade() <= getMinGradeToExecute()) {
			std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
			std::cout << executor.getName() << " executed " << getName() << std::endl;
		}
		else if (!getIsSigned()) {
			std::cout << getName() <<" is not signed." << std::endl;
		}
		else if (executor.getGrade() > getMinGradeToExecute()) {
			throw Form::GradeTooLowException();
		}
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

