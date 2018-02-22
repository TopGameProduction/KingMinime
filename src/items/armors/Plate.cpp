//
// Created by PC on 19.02.2018.
//

#include "Plate.h"

Plate::Plate() : Armor("Plate", 1, 1) {}

Plate::~Plate() = default;

Item *Plate::clone() const { return new Plate(*this); }
