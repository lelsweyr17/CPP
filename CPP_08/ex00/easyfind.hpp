#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>

class OccurenceIsNotFound : public std::exception {
	public:
		virtual const char *what() const throw();
};

const char *OccurenceIsNotFound::what() const throw() {
	return "Occurence is not found!";
}

template<typename T>
typename T::const_iterator    easyfind(T a, int b) {
	std::vector<int>::const_iterator it = a.begin();
	it = find(a.begin(), a.end(), b);
	if (it == a.end())
		throw OccurenceIsNotFound();
	return it;
}

#endif