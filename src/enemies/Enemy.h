//
// Created by agunner on 2/25/18.
//

#ifndef KINGMINIME_ENEMY_H
#define KINGMINIME_ENEMY_H

#include <string>
#include "../Hero.h"

class Hero;

class Enemy {
private:
    std::string name;
    int hp;
    int hpMax;
    int dmg;
public:
    Enemy(std::string name, int hp, int dmg);

    ~Enemy();

    //Getters & Setters

    const std::string &getName() const;

    const int &getHp() const;

    void setHp(const int & newHp);

    const int &getHpMax() const;

    const int &getDamage() const;

    //Functions

    void attack(Hero &hero);
};


#endif //KINGMINIME_ENEMY_H
