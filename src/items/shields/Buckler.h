//
// Created by PC on 19.02.2018.
//

#ifndef KINGMINIME_BUCKLER_H
#define KINGMINIME_BUCKLER_H


#include "Shield.h"

class Buckler : public Shield {
public:
    Buckler();
    Item * clone() const override;
};


#endif //KINGMINIME_BUCKLER_H
