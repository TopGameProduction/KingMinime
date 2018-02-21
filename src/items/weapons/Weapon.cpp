//
// Created by PC on 17.02.2018.
//

#include "Weapon.h"

Weapon::Weapon(std::string name, int buyPrice, int dmg, int as, int dst) : Item(name, buyPrice) {
    this->dmg = dmg;
    this->as = as;
    this->dst = dst;
}

Weapon::~Weapon():~Item() {}

Weapon::Weapon(const Weapon &weapon):Item(weapon) {
    this->dmg = (int) &weapon.getDmg();
    this->as = (int) &weapon.getAs();
    this->dst = (int) &weapon.getDst();
}

//Getters & Setters
const int &Weapon::getDmg() const { return this->dmg; }

const int &Weapon::getAs() const { return this->as; }

const int &Weapon::getDst() const { return this->dst; }

//Functions
std::string Weapon::toString() const {
    Item::toString() +
    "Damage: " + std::to_string(dmg) + "\n" +
    "Attack Speed: " + std::to_string(as) + "\n" +
    "Distance: " + std::to_string(dst) + "\n";
}

Weapon::Weapon(Weapon &&weapon) noexcept : Item(weapon){

}

Weapon &Weapon::operator=(const Weapon &weapon) {
    Item::operator=(weapon);
}

Weapon &Weapon::operator=(Weapon &weapon) noexcept{
    Item::operator=(weapon);
}








