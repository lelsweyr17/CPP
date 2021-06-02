#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main() {
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Victim jim2(jim);
	Peon joe("Joe");
	Peon joe2(joe);

	std::cout << robert << jim << joe << jim2 << joe2;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(jim2);
	robert.polymorph(joe2);

	return 0;
}