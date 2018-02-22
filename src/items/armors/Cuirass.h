//
// Created by PC on 19.02.2018.
//

#ifndef KINGMINIME_CUIRASS_H
#define KINGMINIME_CUIRASS_H


#include "Armor.h"

class Cuirass : public Armor{
public:
    Cuirass();

    ~Cuirass() override;

    Item* clone() const override;
};



#endif //KINGMINIME_CUIRASS_H
