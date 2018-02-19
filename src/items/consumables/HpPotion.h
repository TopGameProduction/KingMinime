//
// Created by agunner on 2/18/18.
//

#ifndef KINGMINIME_HPPOTION_H
#define KINGMINIME_HPPOTION_H

#include "Potion.h"

class HpPotion : public Potion {
private:
    int grantedHpPerCharge;
    int charges;
public:
    HpPotion(std::string name, int buyPrice, int grantedHp, int charges);

    const int &getGrantedHp() const;

    const int &getCharges() const;

    void use(Hero *hero) override;
};


#endif //KINGMINIME_HPPOTION_H
