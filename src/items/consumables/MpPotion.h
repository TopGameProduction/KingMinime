//
// Created by agunner on 2/18/18.
//

#ifndef KINGMINIME_MPPOTION_H
#define KINGMINIME_MPPOTION_H

#include "Potion.h"

class MpPotion : public Potion {
private:
    int grantedMpPerCharge;
    int charges;
public:
    MpPotion(std::string name, int buyPrice, int grantedMp, int charges);

    ~MpPotion() override ;

    const int &getGrantedHp() const;

    const int &getCharges() const;

    void use(Hero &hero) override;

    Item* clone() const override ;

    std::string toString() const override ;
};


#endif //KINGMINIME_MPPOTION_H
