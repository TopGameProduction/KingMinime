//
// Created by agunner on 2/17/18.
//

#include "Fist.h"

Fist::Fist() : Weapon("Fist", 50, 1, 1, 1) {}

Fist::~Fist():~Weapon() {

}

Fist::Fist(const Fist &fist) : Weapon(fist) {

}

Fist::Fist(Fist &&fist) noexcept:Weapon(fist) {

}

Fist &Fist::operator=(const Fist &fist) {
    Weapon::operator=(fist);
}

Fist &Fist::operator=(Fist &&fist) noexcept {
    Weapon::operator=(fist);
}



//Item *Fist::clone() const { return new Fist(*this); }
