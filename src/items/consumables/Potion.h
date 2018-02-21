//
// Created by agunner on 2/18/18.
//

#ifndef KINGMINIME_POTION_H
#define KINGMINIME_POTION_H

#include "../Item.h"
#include "../../Hero.h"

class Hero;

class Potion : public Item {
public:
    Potion(std::string name, int buyPrice);

    virtual void use(Hero *hero) = 0;

    virtual Item *clone() const = 0;

    virtual std::string toString() const = 0;

};

#endif //KINGMINIME_POTION_H
