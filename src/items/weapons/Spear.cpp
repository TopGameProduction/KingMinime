//
// Created by agunner on 2/17/18.
//

#include "Spear.h"

Spear::Spear() : Weapon("Spear", 50, 1, 1, 1) {}

Spear::~Spear(): ~Weapon() {

}

Spear::Spear(const Spear &spear):Weapon(spear) {

}

Spear::Spear(Spear &&spear) noexcept:Weapon(spear) {

}

Spear &Spear::operator=(const Spear &spear) {
    Weapon::operator=(spear);
}

Spear &Spear::operator=(Spear &&spear) noexcept{
    Weapon::operator=(spear);
}



//Item *Spear::clone() const { new Spear(*this); }
