//
// Created by PC on 17.02.2018.
//

#include "Bow.h"

Bow::Bow() : Weapon("Bow", 50, 1, 1, 1) {}

Bow::~Bow() :~Weapon() {

}

Bow::Bow(const Bow &bow) : Weapon(bow) {

}

Bow::Bow(Bow &&bow) noexcept :Weapon(bow) {

}

Bow &Bow::operator=(const Bow &bow) {
    Weapon::operator=(bow);
}

Bow &Bow::operator=(Bow &&bow) noexcept {
    Weapon::operator=(bow);
}



//Item *Bow::clone() const { return new Bow(*this); }
