//
// Created by PC on 17.02.2018.
//

#include "Weapon.h"



Weapon::Weapon(std::string name, int buyPrice, int dmg, int as, int dst) : Item(name, buyPrice) {
    this->dmg = dmg;
    this->as = as;
    this->dst = dst;
}

Weapon::~Weapon() {}

//Accessors

const int &Weapon::getDmg() const { return this->dmg; }

const int &Weapon::getAs() const { return this->as; }

const int &Weapon::getDst() const { return this->dst; }



