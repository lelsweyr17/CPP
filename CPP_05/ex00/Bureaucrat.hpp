#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat {
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(std::string, int);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat&	operator=(const Bureaucrat&);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		std::string	getName() const;
		int			getGrade() const;
		void		incrementingAGrade();
		void		decrementingAGrade();
	
	private:
		std::string	name;
		int			grade;
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif 