#include <iostream>
#include "src/Hero.h"
#include "src/items/consumables/HpPotion.h"


int main() {
    Hero *hero = new Hero;
    Potion *p = new HpPotion("healing Salve", 100, 20, 3);
    hero->setHp(50);
    hero->use(p);
    std::cout << hero->toString();

    return 0;
}