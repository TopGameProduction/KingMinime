//
// Created by PC on 19.02.2018.
//

#ifndef KINGMINIME_PLATE_H
#define KINGMINIME_PLATE_H


#include "Armor.h"

class Plate : public Armor {
public:
    Plate();

    ~Plate() override;

    Item *clone() const override;
};


#endif //KINGMINIME_PLATE_H
