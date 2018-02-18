//
// Created by PC on 17.02.2018.
//

#ifndef KINGMINIME_WEAPON_H
#define KINGMINIME_WEAPON_H

#include <string>

class Weapon {
private:
    std::string name;
    int dmg{};
    int as{};
    int dst{};
public:
    Weapon(std::string name, int dmg, int as, int dst);

    virtual ~Weapon();

    //Accessors

    virtual const std::string &getName() const;

    virtual const int &getDmg() const;

    virtual const int &getAs() const;

    virtual const int &getDst() const;

};


#endif //KINGMINIME_WEAPON_H
