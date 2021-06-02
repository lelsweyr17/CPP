#include "Enemy.hpp"

Enemy::Enemy() {
}

Enemy::~Enemy() {
}

Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type) {
}

Enemy::Enemy(const Enemy& copy) {
	operator=(copy);
}

Enemy&	Enemy::operator=(const Enemy& enemy) {
	if (this != &enemy) {
		hp = enemy.hp;
		type = enemy.type;
	}
	return *this;
}

void	Enemy::takeDamage(int hpReduce) {
	if (hpReduce >= 0) {
		hp -= hpReduce;
	}
}

int		Enemy::getHP() const {
	return hp;
}

std::string const	Enemy::getType() const {
	return type;
}