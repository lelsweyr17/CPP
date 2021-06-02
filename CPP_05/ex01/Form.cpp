#include "Form.hpp"

Form::Form() {
}

Form::~Form() {
}

Form::Form(std::string nameValue, int gradeToSign, int gradeToExecute) : name(nameValue), isSigned(false), minGradeToSign(gradeToSign), minGradeToExecute(gradeToExecute) {
}

Form::Form(const Form& copy) {
	operator=(copy);
}
	
Form&	Form::operator=(const Form& form) {
	if (this != &form) {
		isSigned = form.isSigned;
		minGradeToSign = form.minGradeToSign;
		minGradeToExecute = form.minGradeToExecute;
	}
	return *this;
}

void	Form::setIsSigned() {
	isSigned = true;
}

std::string Form::getName() const {
	return name;
}

bool	Form::getIsSigned() const {
	return isSigned;
}

int	Form::getMinGradeToSign() const {
	return minGradeToSign;
}

int	Form::getMinGradeToExecute() const {
	return minGradeToExecute;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

void	Form::beSigned(const Bureaucrat& bureaucrat) {
	try
	{
		if (minGradeToSign < bureaucrat.getGrade()) {
			throw Form::GradeTooLowException();
		}
		else if (minGradeToSign >= bureaucrat.getGrade() && isSigned) {
			std::cout << "The form is already signed." << std::endl;
		}
		else {
			std::cout << "The form " << name << " is signed by " << bureaucrat.getName() << "." << std::endl;
			isSigned = true;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}