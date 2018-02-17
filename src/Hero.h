//
// Created by PC on 17.02.2018.
//

#ifndef KINGMINIME_HERO_H
#define KINGMINIME_HERO_H
#include <string>
#include "Weapon.h"
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
    const std::string& getName(){return name;}
    const int& getLvl(){return lvl;}
    const int& getXp(){return xp;}
    const int& getHp(){return hp;}
    const int& getMp(){return mp;}
    const int& getX(){ return x;}
    const int& getY(){return y;}
    const int& getMs(){ return ms;}
    Weapon* getWeapon(){ return weapon;}
    Inventory* getInventar(){ return inventory;}

    void initialize();

    ~Hero();
};


#endif //KINGMINIME_HERO_H
