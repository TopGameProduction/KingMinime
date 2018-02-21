//
// Created by PC on 17.02.2018.
//

#include "Bow.h"

Bow::Bow() : Weapon("Bow", 50, 1, 1, 1) {}

Bow::~Bow() :~Weapon() {

}



//Item *Bow::clone() const { return new Bow(*this); }
