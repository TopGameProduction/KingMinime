//
// Created by PC on 18.02.2018.
//

#include "Item.h"

Item::Item(std::string name, int buyPrice) {
    this->name = name;
    this->buyPrice = buyPrice;
    this->sellPrice = buyPrice / 2;
}

Item::~Item() {}

//Getters & Setters
const std::string &Item::getName() const { return this->name; }

const int &Item::getBuyPrice() const { return this->buyPrice; }

const int &Item::getSellPrice() const { return this->sellPrice; }

//Functions
std::string Item::toString() const {
    return "Name: " + name + "\n" +
           "Buy price: " + std::to_string(this->buyPrice) + "\n" +
           "Sell price: " + std::to_string(this->sellPrice) + "\n";
}

