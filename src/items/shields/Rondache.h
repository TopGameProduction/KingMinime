//
// Created by PC on 19.02.2018.
//

#ifndef KINGMINIME_RONDACHE_H
#define KINGMINIME_RONDACHE_H


#include "Shield.h"

class Rondache : public Shield{
public:
    Rondache();

    ~Rondache() override;

    Item * clone() const override;
};


#endif //KINGMINIME_RONDACHE_H
