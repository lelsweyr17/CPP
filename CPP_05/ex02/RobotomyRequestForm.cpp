#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45) {
	this->target = target;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	try {
		if (getIsSigned() && executor.getGrade() <= getMinGradeToExecute()) {
			if (rand() % 2 == 0)
				std::cout << target << " has been robotomized successfully." << std::endl;
			else
				std::cout << "It's a failure." << std::endl;
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
