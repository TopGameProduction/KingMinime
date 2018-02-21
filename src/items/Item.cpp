//
// Created by PC on 18.02.2018.
//

#include <wsman.h>
#include "Item.h"

Item::Item(std::string name, int buyPrice) {
    this->name =new std::string(name);
    this->buyPrice = buyPrice;
    this->sellPrice = buyPrice / 2;
}

Item::~Item() {
    delete this->name;
}

//Getters & Setters
const std::string &Item::getName() const { return this->*name; }

const int &Item::getBuyPrice() const { return this->buyPrice; }

const int &Item::getSellPrice() const { return this->sellPrice; }


//Functions
std::string Item::toString() const {
    return "Name: " + *name + "\n" +
           "Buy price: " + std::to_string(this->buyPrice) + "\n" +
           "Sell price: " + std::to_string(this->sellPrice) + "\n";
}



