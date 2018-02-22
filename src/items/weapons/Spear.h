//
// Created by agunner on 2/17/18.
//

#ifndef KINGMINIME_SPEAR_H
#define KINGMINIME_SPEAR_H

#include "Weapon.h"

class Spear : public Weapon {
public:
    Spear();

    ~Spear() override ;

    Item* clone() const override;
};


#endif //KINGMINIME_SPEAR_H
