//
// Created by PC on 17.02.2018.
//

#ifndef KINGMINIME_BOW_H
#define KINGMINIME_BOW_H


#include "Weapon.h"

class Bow : public Weapon {
public:
    Bow();

    ~Bow();

    Bow(const Bow & bow);

    Bow(Bow &&bow) noexcept;

    Bow &operator=(const Bow &bow);

    Bow &operator=(Bow &&bow) noexcept;
    //Item* clone() const override;
};


#endif //KINGMINIME_BOW_H
