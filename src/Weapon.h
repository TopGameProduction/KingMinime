//
// Created by PC on 17.02.2018.
//

#ifndef KINGMINIME_WEAPON_H
#define KINGMINIME_WEAPON_H

#include <string>

class Weapon {
private:
    std::string name;
    int dmg;
    int as;
    int dst;
public:
    virtual const std::string &getName() const { return name; }

    virtual const int &getDmg() const { return dmg; }

    virtual const int &getAs() const { return as; }

    virtual const int &getDst() const { return dst; }

    virtual void initialize(std::string name, int dmg, int as, int dst);

    ~Weapon() {};
};


#endif //KINGMINIME_WEAPON_H
