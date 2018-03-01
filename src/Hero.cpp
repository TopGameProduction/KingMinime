//
// Created by PC on 17.02.2018.
//

#include "Hero.h"
#include "items/weapons/Fist.h"

Hero::Hero() : name("Marcus Rofler") {
    this->posX = 0;
    this->posY = 0;
    this->lvl = 1;
    this->maxLvl = 25;
    this->gold = 100;
    this->xp = 0;
    this->xpNext = 100;
    this->hp = 100;
    this->hpMax = 100;
    this->mp = 100;
    this->mpMax = 100;
    this->ms = 10;
    this->weapon = new Fist();
    this->inventory = new Inventory(6);
}

Hero::~Hero() {
    delete this->weapon;
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

void Hero::use(Potion *potion) { potion->use(this); }

void Hero::pick(Item &item) { this->inventory->addItem(item); }

void Hero::drop(int index) { this->inventory->removeItem(index); }

void Hero::interact(int index) {

    Weapon *pw = dynamic_cast<Weapon *>((*this->inventory)[index]);
    if (pw) {
        this->weapon = pw;
    }
    Potion *pp = dynamic_cast<Potion *>((*this->inventory)[index]);
    if (pp) {
        pp->use(this);
    }
}

void Hero::attack(Enemy *enemy) {}

std::string Hero::toString() {
    return "Name: " + this->name + "\n" +
           "Position: " + std::to_string(this->posX) + " " + std::to_string(this->posY) + "\n" +
           "Gold: " + std::to_string(gold) + "\n" +
           "Level: " + std::to_string(this->lvl) + "/" + std::to_string(this->maxLvl) + "\n" +
           "Experience: " + std::to_string(this->xp) + "/" + std::to_string(this->xpNext) + "\n" +
           "Health Points: " + std::to_string(this->hp) + "/" + std::to_string(this->hpMax) + "\n" +
           "Mana Points: " + std::to_string(this->mp) + "/" + std::to_string(this->mpMax) + "\n" +
           "Movement Speed: " + std::to_string(this->ms) + "\n" +
           this->inventory->toString() + "\n";
}
















