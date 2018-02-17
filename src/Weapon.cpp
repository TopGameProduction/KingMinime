//
// Created by PC on 17.02.2018.
//

#include "Weapon.h"

void Weapon::initialize(std::string name, int dmg, int as, int dst) {
    this->name = name;
    this->dmg = dmg;
    this->as = as;
    this->dst = dst;
}
