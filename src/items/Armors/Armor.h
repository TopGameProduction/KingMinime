//
// Created by PC on 19.02.2018.
//

#ifndef KINGMINIME_ARMOR_H
#define KINGMINIME_ARMOR_H


#include "../Item.h"

class Armor : public Item {

private:
    int armPoint;
public:
    Armor(const std::string &name, int buyPrice, int armPoint);
    virtual ~Armor();
    const int &getArmPoint();
};


#endif //KINGMINIME_ARMOR_H
