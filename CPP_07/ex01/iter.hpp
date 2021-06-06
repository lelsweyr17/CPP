#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	f(T &a) {
	std::cout << a << "!!!" << std::endl;
}

template <typename T>
void	iter(T *a, unsigned int b, void (*f)(T&)) {
	for (int i = 0; i < b; i++) {
		(*f)(a[i]);
	}
	std::cout << std::endl;
}

#endif 