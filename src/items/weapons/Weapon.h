//
// Created by PC on 17.02.2018.
//

#ifndef KINGMINIME_WEAPON_H
#define KINGMINIME_WEAPON_H

#include "../Item.h"

class Weapon : public Item {
private:
    int dmg;
    int as;
    int dst;
public:
    Weapon(std::string name, int buyPrice, int dmg, int as, int dst);

    virtual ~Weapon();

    //Getters & Setters
    virtual const int &getDmg() const;

    virtual const int &getAs() const;

    virtual const int &getDst() const;

    //Functions
    //virtual Item * clone() const = 0;

    std::string toString() const override;


};


#endif //KINGMINIME_WEAPON_H
