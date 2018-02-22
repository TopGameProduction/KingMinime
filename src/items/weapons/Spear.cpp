//
// Created by agunner on 2/17/18.
//

#include "Spear.h"

Spear::Spear() : Weapon("Spear", 50, 1, 1, 1) {}

Spear::~Spear() = default;

Item *Spear::clone() const { new Spear(*this); }
