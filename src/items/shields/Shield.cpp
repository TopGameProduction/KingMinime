//
// Created by PC on 19.02.2018.
//

#include "Shield.h"

Shield::Shield(const std::string &name, int buyPrice, int blockChanse) :Item(name, buyPrice) {
this->blockChance=blockChanse;
}

Shield::~Shield() {

}

const int &Shield::getBlockChance() {
    return this->blockChance;
}
