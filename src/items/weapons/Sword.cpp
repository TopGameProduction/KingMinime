
//
// Created by PC on 17.02.2018.
//
#include "Weapon.h"
#include "Sword.h"

Sword::Sword() : Weapon("Sword", 50, 1, 1, 1) {}

Sword::~Sword():~Weapon(){

}

Sword::Sword(const Sword &sword):Weapon(sword) {
}

Sword::Sword(Sword &&sword) noexcept:Weapon(sword) {

}

Sword &Sword::operator=(const Sword &sword) {
    Weapon::operator=(sword);
}

Sword &Sword::operator=(Sword &&sword) noexcept{
    Weapon::operator=(sword);
}

//Item *Sword::clone() const { return new Sword(*this); }
