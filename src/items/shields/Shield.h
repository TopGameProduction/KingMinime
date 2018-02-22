//
// Created by PC on 19.02.2018.
//

#ifndef KINGMINIME_SHIELD_H
#define KINGMINIME_SHIELD_H


#include "../Item.h"

class Shield : public Item {
private:
    int blockChance;
public:
    Shield(const std::string &name, int buyPrice, int blockChance);

    ~Shield() override;

    //Getters & Setters
    const int &getBlockChance();

    //Functions
    Item *clone() const override = 0;

    std::string toString() const override;
};


#endif //KINGMINIME_SHIELD_H
