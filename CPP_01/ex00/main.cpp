#include "Pony.hpp"

void    ponyOnTheHeap()
{
	Pony	*pony;

	pony = new Pony;
	std::cout << "I'm Pony created on the heap " << pony << std::endl;
	delete pony;
}

void    ponyOnTheStack()
{
	Pony	pony;
	std::cout << "I'm Pony created on the stack " << &pony << std::endl;
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}