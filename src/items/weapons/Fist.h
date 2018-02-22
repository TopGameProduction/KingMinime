//
// Created by agunner on 2/17/18.
//

#ifndef KINGMINIME_FIST_H
#define KINGMINIME_FIST_H

#include "Weapon.h"

class Fist : public Weapon {
public:
    Fist();

    ~Fist() override ;

    Item* clone() const override;
};


#endif //KINGMINIME_FIST_H
