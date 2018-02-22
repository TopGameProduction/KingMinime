//
// Created by PC on 17.02.2018.
//

#include "Axe.h"

Axe::Axe() : Weapon("Axe",50,1,1,1){}

Axe::~Axe() = default;

Item *Axe::clone() const {return new Axe(*this);}
