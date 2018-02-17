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
    const std::string& getName() const{return name;}
    const int& getLvl() const{return lvl;}
    const int& getXp() const{return xp;}
    const int& getHp() const{return hp;}
    const int& getMp() const{return mp;}
    const int& getX() const{ return x;}
    const int& getY() const{return y;}
    const int& getMs() const{ return ms;}
    Weapon* getWeapon() const{ return weapon;}
    Inventory* getInventory() const{ return inventory;}

    void initialize();

    ~Hero(){};
};


#endif //KINGMINIME_HERO_H
