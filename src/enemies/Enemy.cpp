//
// Created by agunner on 2/25/18.
//

#include "Enemy.h"

Enemy::Enemy(std::string name, int hp, int dmg) {
    this->name = name;
    this->hp = hp;
    this->dmg = dmg;
}

Enemy::~Enemy() = default;

const std::string &Enemy::getName() const { return this->name; }

const int &Enemy::getHp() const { return this->hp; }

const int &Enemy::getDamage() const { return this->dmg; }

void Enemy::attack(Hero &hero) {

}
