#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern();
		~Intern();
		Intern(const Intern&);
		Intern&	operator=(const Intern&);

		Form	*makeForm(std::string, std::string) const;

		class FormIsNotFound : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

#endif 