#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(std::string nameValue, int gradeValue) : name(nameValue), grade(gradeValue) {
	try {
		if (grade <= 0) {
			throw Bureaucrat::GradeTooHighException();
		}
		else if (grade > 150) {
			throw Bureaucrat::GradeTooLowException();
		}
		else {
			std::cout << "* create a bureaucrat " << name << " with grade " << grade << " *" << std::endl;
		}
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	operator=(copy);
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& bureaucrat) {
	if (this != &bureaucrat) {
		name = bureaucrat.name;
		grade = bureaucrat.grade;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return out;
}

std::string	Bureaucrat::getName() const {
	return name;
}

int	Bureaucrat::getGrade() const {
	return grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

void		Bureaucrat::incrementingAGrade() {
	std::cout << "* incrementing a grade *" << std::endl;
	try {
		if (grade <= 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			grade--;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

void		Bureaucrat::decrementingAGrade() {
	std::cout << "* decrementing a grade *" << std::endl;
	try {
		if (grade >= 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			grade++;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}
