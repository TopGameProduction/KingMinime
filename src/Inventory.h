//
// Created by PC on 17.02.2018.
//

#ifndef KINGMINIME_INVENTAR_H
#define KINGMINIME_INVENTAR_H

#include "items/Item.h"

class Inventory {
private:
    int capacity;
    int itemsCnt;
    Item **itemArr;
public:
    Inventory(int capacity);

    Inventory(const Inventory &other);

    ~Inventory();

    //Getters & Setters
    const int &getCapacity() const;

    const int &getItemsCount() const;

    //Operators
    Item &operator[](int index);

    Inventory &operator=(const Inventory &other);

    //Functions

    void addItem(Item &item);

    void removeItem(int index);

    std::string toString();
};


#endif //KINGMINIME_INVENTAR_H
