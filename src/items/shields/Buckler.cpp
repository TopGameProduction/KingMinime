//
// Created by PC on 19.02.2018.
//

#include "Buckler.h"

Buckler::Buckler() : Shield("Buckler", 1, 1) {}

Buckler::~Buckler() = default;

Item *Buckler::clone() const { return new Buckler(*this); }


