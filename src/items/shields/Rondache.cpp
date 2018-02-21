//
// Created by PC on 19.02.2018.
//

#include "Rondache.h"

Rondache::Rondache() : Shield("Rondache", 1, 1) {

}

Item *Rondache::clone() const { return new Rondache(*this); }
