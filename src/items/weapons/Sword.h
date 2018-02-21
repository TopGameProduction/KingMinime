//
// Created by PC on 17.02.2018.
//

#ifndef KINGMINIME_SWORD_H
#define KINGMINIME_SWORD_H

#include "Weapon.h"

class Sword : public Weapon{
public:
    Sword();

    ~Sword();

    Sword(const Sword &sword );

    Sword(Sword && sword) noexcept;

    Sword &operator=(const Sword &sword);

    Sword &operator=(Sword &&sword) noexcept;

   // Sword* clone() const override;
};


#endif //KINGMINIME_SWORD_H
