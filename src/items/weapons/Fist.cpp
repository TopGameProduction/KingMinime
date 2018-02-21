//
// Created by agunner on 2/17/18.
//

#include "Fist.h"

Fist::Fist() : Weapon("Fist", 50, 1, 1, 1) {}

Item *Fist::clone() const { return new Fist(*this); }
