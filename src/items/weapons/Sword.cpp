//
// Created by PC on 17.02.2018.
//

#include "Sword.h"

Sword::Sword() : Weapon("Sword", 50, 1, 1, 1) {}

Sword::~Sword() = default;

Item *Sword::clone() const { return new Sword(*this); }
