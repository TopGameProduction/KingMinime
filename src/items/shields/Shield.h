//
// Created by PC on 19.02.2018.
//

#ifndef KINGMINIME_SHIELD_H
#define KINGMINIME_SHIELD_H


#include "../Item.h"

class Shield : public Item{
private:
    int blockChance;
public:
    Shield(const std::string &name, int buyPrice, int blockChance);
    virtual ~Shield();

    const int &getBlockChance();

    virtual Item* clone() const = 0;

    virtual std::string toString();
};


#endif //KINGMINIME_SHIELD_H
