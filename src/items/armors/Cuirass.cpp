//
// Created by PC on 19.02.2018.
//

#include "Cuirass.h"

Cuirass::Cuirass() : Armor("Cuirass", 1, 1) {}

Cuirass::~Cuirass() = default;

Item *Cuirass::clone() const { return new Cuirass(*this); }
