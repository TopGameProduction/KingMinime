//
// Created by PC on 19.02.2018.
//

#include "Scutum.h"

Scutum::Scutum() : Shield("Scutum", 1, 1) {}

Scutum::~Scutum() = default;

Item *Scutum::clone() const { return new Scutum(*this); }
