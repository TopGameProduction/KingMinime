//
// Created by PC on 19.02.2018.
//

#include "Clipeum.h"

Clipeum::Clipeum() : Shield("Clipeum", 1, 1) {}

Item *Clipeum::clone() const { return new Clipeum(*this); }

