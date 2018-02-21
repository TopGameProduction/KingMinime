//
// Created by agunner on 2/17/18.
//

#ifndef KINGMINIME_SPEAR_H
#define KINGMINIME_SPEAR_H


#include "Weapon.h"

class Spear : public Weapon {
public:
    Spear();

    ~Spear();

    Spear(const Spear &spear);

    Spear (Spear &&spear) noexcept;

    Spear &operator=(const Spear &spear);

    Spear &operator=(Spear &&spear) noexcept;

    //Item* clone() const override;
};


#endif //KINGMINIME_SPEAR_H
