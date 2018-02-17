//
// Created by PC on 17.02.2018.
//

#include "Hero.h"

void Hero::initialize() {
   this->lvl=1;
   this->xp=0;
   this->hp=0;
   this->mp=100;
   this->x=0;
   this->y=0;
   this->ms=20;
   this->weapon=NULL;
   this->inventory=NULL;
}

