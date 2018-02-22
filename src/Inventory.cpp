//
// Created by PC on 17.02.2018.
//

#include "Inventory.h"

Inventory::Inventory(int capacity) {
    this->capacity = capacity;
    this->itemsCnt = 0;
    this->itemArr = new Item *[capacity];
    for (size_t i = 0; i < capacity; ++i) {
        this->itemArr[i] = nullptr;
    }
}

Inventory::Inventory(const Inventory &other) {
    this->capacity = other.capacity;
    this->itemsCnt = other.itemsCnt;
    this->itemArr = new Item *[capacity];
    for (size_t i = 0; i < this->itemsCnt; ++i) {
        this->itemArr[i] = other.itemArr[i]->clone();
    }
    for (size_t i = this->itemsCnt; i < this->capacity; ++i) {
        this->itemArr[i] = nullptr;
    }
}

Inventory::~Inventory() {
    for (size_t i = 0; i < capacity; ++i) {
        delete this->itemArr[i];
    }
    delete[] itemArr;
}

//Getters & Setters
const int &Inventory::getCapacity() const { return this->capacity; }

const int &Inventory::getItemsCount() const { return this->itemsCnt; }

//Operators
Item &Inventory::operator[](int index) {
    if (index >= 0 && index < itemsCnt) {
        return *this->itemArr[index];
    } else {
        if (index >= itemsCnt && index < capacity) {
            throw ("Slot is empty");
        } else throw ("Bad index");
    }
}

Inventory &Inventory::operator=(const Inventory &other) {
    if (this != &other) {
        for (size_t i = 0; i < this->itemsCnt; ++i) {
            delete this->itemArr[i];
        }
        delete[] this->itemArr;

        this->capacity = other.capacity;
        this->itemsCnt = other.itemsCnt;
        this->itemArr = new Item *[this->capacity];

        for (size_t i = 0; i < this->itemsCnt; ++i) {
            this->itemArr[i] = other.itemArr[i]->clone();
        }
        for (size_t i = this->itemsCnt; i < this->capacity; ++i) {
            this->itemArr[i] = nullptr;
        }
    }
    return *this;
}

//Functions
void Inventory::addItem(Item &item) {
    if (this->itemsCnt >= this->capacity) {
        throw "No empty slots";
    } else {
        this->itemArr[this->itemsCnt++] = &item;
    }
}

void Inventory::removeItem(int index) {
    if (index < 0 || index >= this->itemsCnt) {
        throw ("Wrong slot");
    }
    //delete this->itemArr[index];
    this->itemArr[index] = this->itemArr[this->itemsCnt - 1];
    this->itemArr[--this->itemsCnt] = nullptr;
}

std::string Inventory::toString() {
    if (this->itemsCnt == 0) {
        return "Inventory is empty\n";
    } else {
        std::string output = "INVENTORY\n";
        for (size_t i = 0; i < this->itemsCnt; ++i) {
            output += ("<---Slot " + std::to_string(i) + "--->\n" + this->itemArr[i]->toString() + "\n");
        }
        return  output;
    }
}

