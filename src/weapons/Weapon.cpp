//
// Created by PC on 17.02.2018.
//

#include "Weapon.h"
#include <string>


Weapon::Weapon(int dmg, int as, int dst) : Item(std::string name, int buyPrice) {
    this->dmg=dmg;
    this->as = as;
    this->dst = dst;
}

Weapon::~Weapon() {}

//Accessors

const int &Weapon::getDmg() const { return this->dmg; }

const int &Weapon::getAs() const { return this->as; }

const int &Weapon::getDst() const { return this->dst; }


