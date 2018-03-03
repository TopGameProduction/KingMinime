//
// Created by PC on 17.02.2018.
//

#include <iostream>
#include "Hero.h"
#include "items/weapons/Fist.h"

Hero::Hero() : name("Marcus Rofler"), posX(0), posY(0), lvl(1), maxLvl(25), gold(100), xp(0), xpNext(100), hp(100),
               hpMax(100), mp(100), mpMax(100), ms(10), weapon(new Fist()), armor(nullptr), shield(nullptr),
               inventory(new Inventory(6)) {
}

Hero::~Hero() {
    delete this->weapon;
    delete this->armor;
    delete this->shield;
    delete this->inventory;
};

Hero::Hero(const Hero &hero) {
    this->weapon = hero.weapon;
    this->inventory = hero.inventory;
}

Hero &Hero::operator=(const Hero &hero) {
    Weapon *tmp_weapon = hero.weapon;
    Inventory *tmp_inventory = hero.inventory;
    delete this->weapon;
    delete this->inventory;
    this->weapon = tmp_weapon;
    this->inventory = tmp_inventory;
    return *this;
}

//Accessors

const std::string &Hero::getName() const { return this->name; }

const int &Hero::getPosX() const { return this->posX; }

const int &Hero::getPosY() const { return this->posY; }

const int &Hero::getLvl() const { return this->lvl; }

const int &Hero::getMaxLvl() const { return this->maxLvl; }

const int &Hero::getGold() const { return this->gold; }

const int &Hero::getXp() const { return this->xp; }

const int &Hero::getXpNext() const { return this->xpNext; }

const int &Hero::getHp() const { return this->hp; }

void Hero::setHp(const int &newHp) {
    if (newHp <= this->hpMax && newHp >= 0) {
        this->hp = newHp;
    } else {
        this->hp = hpMax;
    }
}

const int &Hero::getHpMax() const { return this->hpMax; }

const int &Hero::getMp() const { return this->mp; }

void Hero::setMp(const int &newMp) {
    if (newMp <= this->hpMax && newMp >= 0) {
        this->mp = newMp;
    } else {
        this->mp = mpMax;
    }
}

const int &Hero::getMpMax() const { return this->mpMax; }

const int &Hero::getMs() const { return this->ms; }

Weapon *Hero::getWeapon() const { return this->weapon; }

Inventory *Hero::getInventory() const { return this->inventory; }

//Methods

void Hero::pick(Item &item) { this->inventory->addItem(item); }

void Hero::drop(int index) { this->inventory->removeItem(index); }

void Hero::interact(int index) {

    Weapon *pw = dynamic_cast<Weapon *>((*this->inventory)[index]);
    if (pw) {
        char answer;
        std::cout << "Do you want to use weapon in " << index << " slot" << std::endl;
        std::cin >> answer;
        if (answer == 'Y') {
            this->weapon = dynamic_cast<Weapon *>(pw->clone());
            this->inventory->removeItem(index);
        } else return;
    }
    Armor *pa = dynamic_cast<Armor *>((*this->inventory)[index]);
    if (pw) {
        char answer;
        std::cout << "Do you want to use weapon in " << index << " slot" << std::endl;
        std::cin >> answer;
        if (answer == 'Y') {
            this->armor = dynamic_cast<Armor*>(pa->clone());
            this->inventory->removeItem(index);
        } else return;
    }
    Weapon *p = dynamic_cast<Weapon *>((*this->inventory)[index]);
    if (pw) {
        char answer;
        std::cout << "Do you want to use weapon in " << index << " slot" << std::endl;
        std::cin >> answer;
        if (answer == 'Y') {
            this->weapon = dynamic_cast<Weapon *>(pw->clone());
            this->inventory->removeItem(index);
        } else return;
    }
    Potion *pp = dynamic_cast<Potion *>((*this->inventory)[index]);
    if (pp) {
        char answer;
        std::cout << "Do you want to use potion in " << index << " slot?" << std::endl;
        std::cin >> answer;
        if (answer == 'Y') {
            pp->use(this);
        } else return;
    }
}

void Hero::attack(Enemy *enemy) {}

std::string Hero::toString() {
    std::string output = "\n\n<<<<<<<<<<HERO INFO>>>>>>>>>>>\n\n";
    output +=
            "Name: " + this->name + "\n" +
            "Position: " + std::to_string(this->posX) + " " + std::to_string(this->posY) + "\n" +
            "Gold: " + std::to_string(gold) + "\n" +
            "Level: " + std::to_string(this->lvl) + "/" + std::to_string(this->maxLvl) + "\n" +
            "Experience: " + std::to_string(this->xp) + "/" + std::to_string(this->xpNext) + "\n" +
            "Health Points: " + std::to_string(this->hp) + "/" + std::to_string(this->hpMax) + "\n" +
            "Mana Points: " + std::to_string(this->mp) + "/" + std::to_string(this->mpMax) + "\n" +
            "Movement Speed: " + std::to_string(this->ms) + "\n" +
            "My Weapon: " + (weapon == nullptr ? "No weapon" : weapon->getName()) + "\n" +
            "My Shield: " + (shield == nullptr ? "No shield" : shield->getName()) + "\n" +
            "My Armor: " + (armor == nullptr ? "No armor" : armor->getName()) + "\n" +
            this->inventory->toString() + "\n";
    return output;
}