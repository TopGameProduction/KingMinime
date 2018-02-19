//
// Created by PC on 17.02.2018.
//

#ifndef KINGMINIME_HERO_H
#define KINGMINIME_HERO_H

#include "items/weapons/Weapon.h"
#include "items/consumables/Potion.h"
#include "Inventory.h"

class Potion;

class Hero {
private:
    const std::string name;
    int posX;
    int posY;
    int gold;
    int lvl;
    int maxLvl;
    int xp;
    int xpNext;
    int hp;
    int hpMax;
    int mp;
    int mpMax;
    int ms;
    Weapon *weapon;
    Inventory *inventory;
public:
    Hero();

    ~Hero();

    //Getters & Setters

    const std::string &getName() const;

    const int &getPosX() const;

    const int &getPosY() const;

    const int &getGold() const;

    const int &getLvl() const;

    const int &getMaxLvl() const;

    const int &getXp() const;

    const int &getXpNext() const;

    const int &getHp() const;

    void setHp(const int& newHp );

    const int &getHpMax() const;

    const int &getMp() const;

    void setMp(const int& newMp);

    const int &getMpMax() const;

    const int &getMs() const;

    Weapon *getWeapon() const;

    Inventory *getInventory() const;

    //Methods

    /*
    void addToInventory(Item * item);

    void removeFromInventory(int slot);

    void pick (Weapon * weapon);

    void pick (int slot);

    void drop (Weapon * weapon);
     */

    void use (Potion *  potion);

    std::string toString();

};


#endif //KINGMINIME_HERO_H
