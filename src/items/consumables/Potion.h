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

    ~Potion() override;

    virtual void use(Hero *hero) = 0;

    Item *clone() const override = 0;

    std::string toString() const override = 0;

};

#endif //KINGMINIME_POTION_H
