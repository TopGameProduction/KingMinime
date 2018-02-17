//
// Created by PC on 17.02.2018.
//

#ifndef KINGMINIME_HERO_H
#define KINGMINIME_HERO_H
#include <string>
#include "Weapon.h"
#include "Inventar.h"


class Hero {
private:
    const std::string name;
    int lvl;
    int xp;
    int hp;
    int mp;
    int x;
    int y;
    Weapon weapon;
    Inventar inventar;
    int ms;
public:
    const std::string& getName();
    const int& getLvl();
    const int& getXp();
    const int& getHp();
    const int& getMp();
    const int& getX();
    const int& getY();
    Weapon& getWeapon();
    Inventar& getInventar();
    const int& getMs();

};


#endif //KINGMINIME_HERO_H
