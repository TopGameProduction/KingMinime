//
// Created by PC on 17.02.2018.
//

#include "Hero.h"

void Hero::initialize() {
    this->lvl = 1;
    this->xp = 0;
    this->hp = 0;
    this->mp = 100;
    this->x = 0;
    this->y = 0;
    this->ms = 20;
}

const std::string &Hero::getName() const {
    return this->name;
}

const int &Hero::getLvl() const {
    return this->lvl;
}

const int &Hero::getXp() const {
    return this->xp;
}

const int &Hero::getHp() const {
    return this->hp;
}

const int &Hero::getMp() const {
    return this->mp;
}

const int &Hero::getX() const {
    return this->x;
}

const int &Hero::getY() const {
    return this->y;
}

const int &Hero::getMs() const {
    return this->ms;
}

Weapon *Hero::getWeapon() const {
    return this->weapon;
}

Inventory *Hero::getInventory() const {
    return this->inventory;
}

