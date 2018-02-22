//
// Created by PC on 18.02.2018.
//

#ifndef KINGMINIME_ITEM_H
#define KINGMINIME_ITEM_H

#include <string>

class Item {
private:
    std::string name;
    int buyPrice;
    int sellPrice;
public:
    Item(std::string name, int buyPrice);

    virtual ~Item();

    //Getters & Setters
    virtual const std::string &getName() const;

    virtual const int &getBuyPrice() const;

    virtual const int &getSellPrice() const;

    //Functions
    virtual Item *clone() const = 0;

    virtual std::string toString() const;

};

#endif //KINGMINIME_ITEM_H
