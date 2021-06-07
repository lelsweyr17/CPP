#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <iterator>
# include <stack>

template<typename T>
class MutantStack : public std::stack <T> {
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack&);
		MutantStack &operator=(const MutantStack&);

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {return this->c.begin();};
		iterator end() {return this->c.end();};
};

template<typename T>
MutantStack<T>::MutantStack() {
}

template<typename T>
MutantStack<T>::~MutantStack() {
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &copy) {
	operator=(copy);
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &mutantstack) {
	if (this != &mutantstack) {
		this->c = mutantstack.c;
	}
	return *this;
}

#endif