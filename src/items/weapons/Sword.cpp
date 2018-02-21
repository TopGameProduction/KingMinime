
//
// Created by PC on 17.02.2018.
//
#include "Weapon.h"
#include "Sword.h"

Sword::Sword() : Weapon("Sword", 50, 1, 1, 1) {}

Sword::~Sword():~Weapon(){

}


//Item *Sword::clone() const { return new Sword(*this); }
