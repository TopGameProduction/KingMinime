//
// Created by PC on 18.02.2018.
//

#ifndef KINGMINIME_ITEM_H
#define KINGMINIME_ITEM_H

#include <string>

class Item {
private:
    std::string *name;
    int buyPrice;
    int sellPrice;
public:
    Item(std::string name, int buyPrice);

    Item(const Item &item);

    Item(Item &&item) noexcept;

    virtual ~Item();

    Item &operator=(const Item &item);

    Item &operator=(Item &&item) noexcept;

    //Getters & Setters
    virtual const std::string &getName() const;

    virtual const int &getBuyPrice() const;

    virtual const int &getSellPrice() const;

    //Functions
    virtual Item* clone() const = 0;

    virtual std::string toString() const;

};

#endif //KINGMINIME_ITEM_H
