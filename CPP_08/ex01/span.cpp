#include "span.hpp"

Span::Span() {
}

Span::~Span() {
}

Span::Span(const Span &copy) {
	operator=(copy);
}

Span &Span::operator=(const Span &span) {
	if (this != &span) {
		_size = span._size;
		_store = span._store;
	}
	return *this;
}

Span::Span(unsigned int n) {
	_store.reserve(n);
	_size = n;
}

void	Span::addNumber(int nbr) {
	try {
		if (_store.size() < _size) {
			_store.push_back(nbr);
		}
		else {
			throw StorageIsFull();
		}
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

void    Span::addNumber(std::vector<int>::iterator t1, std::vector<int>::iterator t2) {
	int i = 0;
	
	while (t1 != t2) {
		_store.push_back(*t1);
		t1++;
		if (++i == _size)
			throw StorageIsFull();
	}
}

const char  *Span::ArraySizeIsTooSmall::what() const throw() {
    return "Array is too small!";
}

const char  *Span::StorageIsFull::what() const throw() {
    return "Storage is full!";
}

int	Span::shortestSpan() {
	if (_store.size() < 2)
		throw ArraySizeIsTooSmall();
	std::vector <int> tmp(_store);
	int min = abs(tmp[0] - tmp[1]);
	std::sort(tmp.begin(), tmp.end());
	for (int i = 0; i < _size; i++) {
		if (abs(tmp[i] - tmp[i + 1]) < min)
			min = abs(tmp[i] - tmp[i + 1]);
	}
	return min;
}

int	Span::longestSpan() {
	if (_store.size() < 2)
		throw ArraySizeIsTooSmall();
	std::vector<int>::iterator min = std::min_element(_store.begin(), _store.end());
	std::vector<int>::iterator max = std::max_element(_store.begin(), _store.end());
	return *max - *min;
}