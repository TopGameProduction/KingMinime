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
    Shield(const std::string &name, int buyPrice, int blockChanse);
    virtual ~Shield();
    const int &getBlockChance();

};


#endif //KINGMINIME_SHIELD_H
