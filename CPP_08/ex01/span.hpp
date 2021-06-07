#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span {
	public:
		Span();
		~Span();
		Span(unsigned int);
		Span(const Span&);
		Span &operator=(const Span&);

		void	addNumber(int nbr);
		void    addNumber(std::vector<int>::iterator t1, std::vector<int>::iterator t2);
		int		shortestSpan();
		int		longestSpan();

		class StorageIsFull : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class ArraySizeIsTooSmall : public std::exception {
			public:
				virtual const char *what() const throw();
		};


	private:
		std::vector<int>	_store;
		int					_size;
};

#endif 