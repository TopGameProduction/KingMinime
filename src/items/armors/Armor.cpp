//
// Created by PC on 19.02.2018.
//

#include "Armor.h"

Armor::Armor(const std::string &name, int buyPrice, int armPoint) : Item(name, buyPrice) {
    this->armPoint = armPoint;
}

Armor::~Armor() {}

// Getters & Setters
const int &Armor::getArmPoint() { return this->armPoint; }

//Functions
std::string Armor::toString() const {
    return Item::toString() +
           "Armor point: " + std::to_string(this->armPoint) + "\n";
}

