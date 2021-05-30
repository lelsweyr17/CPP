#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character *me = new Character("Titan");
	std::cout << *me;

	Enemy *rs = new RadScorpion();
	Enemy *sm = new SuperMutant();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(rs);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(rs);
	std::cout << *me;
	me->attack(rs);
	std::cout << *me;

	delete me;
	delete rs;
	delete sm;
	delete pr;
	delete pf;
	return 0;
}