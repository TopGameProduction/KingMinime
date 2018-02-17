//
// Created by PC on 17.02.2018.
//

#include "Weapon.h"

const std::string &Weapon::getName() const { return this->name; }

const int &Weapon::getDmg() const { return this->dmg; }

const int &Weapon::getAs() const { return this->as; }

const int &Weapon::getDst() const { return this->dst; }
