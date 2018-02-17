//
// Created by PC on 17.02.2018.
//

#ifndef KINGMINIME_WEAPON_H
#define KINGMINIME_WEAPON_H

#include <string>

class Weapon {
private:
    const std::string name;
    int dmg;
    int as;
    int dst;
public:
    virtual const std::string& getName();
    virtual const int& getDmg();
    virtual const int& getAs();
    virtual const int& getDst();

    virtual void initialize();
};


#endif //KINGMINIME_WEAPON_H
