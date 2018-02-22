//
// Created by PC on 19.02.2018.
//

#include "Shield.h"

Shield::Shield(const std::string &name, int buyPrice, int blockChance) : Item(name, buyPrice) {
    this->blockChance = blockChance;
}

Shield::~Shield() = default;

//Getters & Setters
const int &Shield::getBlockChance() { return this->blockChance; }

//Functions
std::string Shield::toString() const {
    return Item::toString() +
           "Block chance: " + std::to_string(this->blockChance) + "\n";
}
