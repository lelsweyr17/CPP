#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "MutantStack top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "MutantStack size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	std::cout << "step in 'it': " << *it << std::endl;
	++it;
	std::cout << "step out 'it': " << *it << std::endl;
	--it;
	std::cout << "MutantStack: ";
	while (it != ite)
	{
		std::cout << *it << ((it + 1) != ite ? ", " : "");
		++it;
	}
	std::cout << std::endl << std::endl;
	std::stack<int> s(mstack);

	s.push(123);
	s.push(126);
	s.push(12234);
	s.push(956);

	std::cout << "Default stack size: " << s.size() << std::endl;
	std::cout << "Default stack: ";
	while (!s.empty()) {
		std::cout << s.top();
		s.pop();
		std::cout << (!(s.empty()) ? ", " : "");
	}
	std::cout << std::endl;

	return 0;
}