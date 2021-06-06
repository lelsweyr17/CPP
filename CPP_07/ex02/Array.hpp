#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array {
	public:
		Array();
		Array(unsigned int);
		~Array();
		Array(const Array&);
		Array&  operator=(const Array&);

		T &operator[](int index);

		int	size() const;

		class IndexOutOfBoundsException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

	private:
		T *_array;
		int _size;
};

template<typename T>
Array<T>::Array() {
	_array = new T[0]();
	_size = 0;
	std::cout << "* create array with size 0 *" << std::endl;
}

template<typename T>
Array<T>::~Array() {
	if (_array != nullptr)
		delete[] _array;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	_array = new T[n]();
	_size = n;
	std::cout << "* create array with size " << _size << " *" << std::endl;
}

template<typename T>
Array<T>::Array(const Array& copy) {
	operator=(copy);
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &array) {
	if (this != &array) {
		if (_array != nullptr)
			delete[] _array;
		_size = array._size;
		_array = new T[_size];
		for (int i = 0; i < _size; i++) {
			_array[i] = array._array[i];
		}
	}
	return *this;
}

template<typename T>
T	&Array<T>::operator[](int index) {
	if (index >= 0 && index < size())
		return _array[index];
	throw Array<T>::IndexOutOfBoundsException();
}

template<typename T>
int	Array<T>::size() const {
	return _size;
}

template<typename T>
const char *Array<T>::IndexOutOfBoundsException::what() const throw() {
	return "It's out of limits";
}

#endif 