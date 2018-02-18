//
// Created by PC on 17.02.2018.
//

#include "Weapon.h"

Weapon::Weapon(std::string name, int dmg, int as, int dst) {
    this->name = name;
    this->as = as;
    this->dst = dst;
}

Weapon::~Weapon() {}

//Accessors

const std::string &Weapon::getName() const { return this->name; }

const int &Weapon::getDmg() const { return this->dmg; }

const int &Weapon::getAs() const { return this->as; }

const int &Weapon::getDst() const { return this->dst; }


