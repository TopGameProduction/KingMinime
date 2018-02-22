//
// Created by PC on 19.02.2018.
//

#ifndef KINGMINIME_CLIPEUM_H
#define KINGMINIME_CLIPEUM_H


#include "Shield.h"

class Clipeum : public Shield {
public:
    Clipeum();

    ~Clipeum() override ;

    Item *clone() const override;
};


#endif //KINGMINIME_CLIPEUM_H
