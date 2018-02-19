//
// Created by agunner on 2/18/18.
//

#include "HpPotion.h"

HpPotion::HpPotion(std::string name, int buyPrice, int grantedHp, int charges) : Potion(name, buyPrice) {
    this->grantedHpPerCharge = grantedHp;
    this->charges = charges;
}

const int &HpPotion::getGrantedHp() const { return this->grantedHpPerCharge; }

const int &HpPotion::getCharges() const { return this->charges; }

void HpPotion::use(Hero *hero) {
    if (charges > 0) {
        int newHp = hero->getHp() + this->grantedHpPerCharge;
        hero->setHp(newHp);
        charges--;
    }
}


