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

Item::Item(const Item &item) {
    this->name = new std::string(&item.getName());
    this->buyPrice= (int) &item.getBuyPrice();
    this->sellPrice= (int) &item.getSellPrice();
}

Item::Item(Item &&item) noexcept {
  delete this->name;
  this->name= item.name;
  item.name= nullptr;
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

Item &Item::operator=(const Item &item) {
    std::string * tmp_name=new std::string[item.getName()];
    delete this->name;
    this->name=tmp_name;
    return *this;
}

Item &Item::operator=(Item &&item) noexcept{
    delete name;
    this->name=item.name;
    item.name= nullptr;
    return *this;
}


