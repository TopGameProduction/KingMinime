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
    delete weapon;
    delete armor;
    delete shield;
    delete inventory;
};

Hero::Hero(const Hero &hero) : name(hero.name), posX(hero.posX), posY(hero.posY), lvl(hero.lvl), maxLvl(hero.maxLvl),
                               gold(hero.gold), xp(hero.xp), xpNext(hero.xpNext), hp(hero.hp), hpMax(hero.hpMax),
                               mp(hero.mp), mpMax(hero.mpMax), ms(hero.ms) {
    delete weapon;
    weapon = hero.weapon;
    delete armor;
    armor = hero.armor;
    delete shield;
    shield = hero.shield;
    delete inventory;
    inventory = hero.inventory;
}

Hero &Hero::operator=(const Hero &hero) {
    Hero tmpHero(hero);
    //std::swap(name, tmpHero.name);
    std::swap(posX, tmpHero.posX);
    std::swap(posY, tmpHero.posY);
    std::swap(lvl, tmpHero.lvl);
    std::swap(maxLvl, tmpHero.maxLvl);
    std::swap(gold, tmpHero.gold);
    std::swap(xp, tmpHero.xp);
    std::swap(xpNext, tmpHero.xpNext);
    std::swap(hp, tmpHero.hp);
    std::swap(hpMax, tmpHero.hpMax);
    std::swap(mp, tmpHero.mp);
    std::swap(mpMax, tmpHero.mpMax);
    std::swap(ms, tmpHero.ms);
    std::swap(weapon, tmpHero.weapon);
    std::swap(armor, tmpHero.armor);
    std::swap(shield, tmpHero.shield);
    std::swap(inventory, tmpHero.inventory);
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
    if (newHp <= this->hpMax && newHp > 0) {
        this->hp = newHp;
    } else { this->hp = (newHp <= 0 ? 0 : hpMax); }
}

const int &Hero::getHpMax() const { return this->hpMax; }

const int &Hero::getMp() const { return this->mp; }

void Hero::setMp(const int &newMp) {
    if (newMp <= this->mpMax && newMp > 0) {
        this->mp = newMp;
    } else { this->mp = (newMp <= 0 ? 0 : mpMax); }
}

const int &Hero::getMpMax() const { return this->mpMax; }

const int &Hero::getMs() const { return this->ms; }

Weapon *Hero::getWeapon() const { return this->weapon; }

Inventory *Hero::getInventory() const { return this->inventory; }

//Functions

void Hero::pick(Item &item) { this->inventory->addItem(item); }

void Hero::drop(int index) { this->inventory->removeItem(index); }

void Hero::interact(int index) {

    Weapon *pw = dynamic_cast<Weapon *>((*this->inventory)[index]);
    if (pw) {
        char answer;
        std::cout << "Do you want to use weapon in " << index << " slot" << std::endl;
        std::cin >> answer;
        std::cin.ignore(256, '\n');
        if (answer == 'Y') {
            this->weapon = dynamic_cast<Weapon *>(pw->clone());
            this->inventory->removeItem(index);
        }
        return;
    }
    Armor *pa = dynamic_cast<Armor *>((*this->inventory)[index]);
    if (pa) {
        char answer;
        std::cout << "Do you want to use armor in " << index << " slot" << std::endl;
        std::cin >> answer;
        std::cin.ignore(256, '\n');
        if (answer == 'Y') {
            this->armor = dynamic_cast<Armor *>(pa->clone());
            this->inventory->removeItem(index);
        }
        return;
    }
    Shield *ps = dynamic_cast<Shield *>((*this->inventory)[index]);
    if (ps) {
        char answer;
        std::cout << "Do you want to use shield in " << index << " slot" << std::endl;
        std::cin >> answer;
        std::cin.ignore(256, '\n');
        if (answer == 'Y') {
            this->shield = dynamic_cast<Shield *>(ps->clone());
            this->inventory->removeItem(index);
        }
        return;
    }
    Potion *pp = dynamic_cast<Potion *>((*this->inventory)[index]);
    if (pp) {
        char answer;
        std::cout << "Do you want to use potion in " << index << " slot?" << std::endl;
        std::cin >> answer;
        std::cin.ignore(256, '\n');
        if (answer == 'Y') {
            pp->use(*this);
        }
        return;
    }
}

void Hero::attack(Enemy &enemy) {
    enemy.setHp(enemy.getHp() - this->weapon->getDmg());
}

bool Hero::isAlive() { return this->hp == 0; }

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

