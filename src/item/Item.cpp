//
// Created by PC on 18.02.2018.
//

#include "Item.h"

Item::Item(std::string name, int buyPrice) {
      this->name=name;
      this->buyPrice=buyPrice;
      this->selPrice=buyPrice/2;
}

Item::~Item() {}

const std::string &Item::getName() const {
    return <#initializer#>;
}

const int &Item::getBuyPrice() const {
    return <#initializer#>;
}

const int &Item::getSelPrice() const {
    return <#initializer#>;
}
