//
// Created by PC on 17.02.2018.
//

#include "Axe.h"

Axe::Axe() : Weapon("Axe",50,1,1,1){
}

Axe::~Axe():~Weapon() {

}

Axe::Axe(const Axe &axe): Weapon(axe){

}

Axe::Axe(Axe &&axe) noexcept : Weapon(axe) {

}

Axe &Axe::operator=(const Axe &axe) {
    Weapon::operator=(axe);
}

Axe &Axe::operator=(Axe &&axe) noexcept {
    Weapon::operator=(axe);
}

//Item *Axe::clone() const {return new Axe(*this);}
