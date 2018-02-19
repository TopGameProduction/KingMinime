//
// Created by PC on 19.02.2018.
//

#include "Armor.h"

Armor::Armor(const std::string &name, int buyPrice, int armPoint) : Item(name, buyPrice) {
    this->armPoint=armPoint;
}

Armor::~Armor() {}

const int &Armor::getArmPoint() {
    return this->armPoint;
}
