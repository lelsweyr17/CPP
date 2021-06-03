#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form {
	public:
		Form();
		~Form();
		Form(std::string, int, int);
		Form(const Form&);
		Form&	operator=(const Form&);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		std::string		getName() const;
		bool			getIsSigned() const;
		int				getMinGradeToSign() const;
		int				getMinGradeToExecute() const;
		void			beSigned(const Bureaucrat&);
		void			setIsSigned();
		virtual void	execute(Bureaucrat const &) const = 0;

	private:
		std::string		name;
		bool			isSigned;
		int				minGradeToSign;
		int				minGradeToExecute;
};

#endif