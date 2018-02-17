//
// Created by PC on 17.02.2018.
//

#ifndef KINGMINIME_HERO_H
#define KINGMINIME_HERO_H
#include <string>
#include "weapon/Weapon.h"
#include "Inventory.h"


class Hero {
private:
    const std::string name="Marcus Rofler";
    int lvl;
    int xp;
    int hp;
    int mp;
    int x;
    int y;
    int ms;
    Weapon *weapon;
    Inventory *inventory;
public:
    const std::string& getName() const;
    const int& getLvl() const;
    const int& getXp() const;
    const int& getHp() const;
    const int& getMp() const;
    const int& getX() const;
    const int& getY() const;
    const int& getMs() const;
    Weapon* getWeapon() const;
    Inventory* getInventory() const;

    void initialize();

    ~Hero(){};
};


#endif //KINGMINIME_HERO_H
