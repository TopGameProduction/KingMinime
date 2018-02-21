//
// Created by PC on 19.02.2018.
//

#ifndef KINGMINIME_SCUTUM_H
#define KINGMINIME_SCUTUM_H


#include "Shield.h"

class Scutum : public Shield{
public:
    Scutum();

    Item * clone() const override;
};


#endif //KINGMINIME_SCUTUM_H
