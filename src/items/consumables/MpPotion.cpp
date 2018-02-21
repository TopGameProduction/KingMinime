//
// Created by agunner on 2/18/18.
//

#include "MpPotion.h"

MpPotion::MpPotion(std::string name, int buyPrice, int grantedMp, int charges) : Potion(name, buyPrice) {
    this->grantedMpPerCharge = grantedMp;
    this->charges = charges;
}

const int &MpPotion::getGrantedHp() const { return this->grantedMpPerCharge; }

const int &MpPotion::getCharges() const { return this->charges; }

void MpPotion::use(Hero *hero) {
    if (charges > 0) {
        int newMp = hero->getMp() + this->grantedMpPerCharge;
        hero->setHp(newMp);
        charges--;
    }
}

Item *MpPotion::clone() const { return new MpPotion(*this); }

std::string MpPotion::toString() const {
    return Item::toString() +
           "Charges: " + std::to_string(this->charges) + "\n" +
           "Mana heal per charge: " + std::to_string(this->grantedMpPerCharge) + "\n";
}
