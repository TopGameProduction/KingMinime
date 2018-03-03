#include <iostream>
#include "src/Hero.h"
#include "src/items/consumables/HpPotion.h"
#include "src/items/weapons/Axe.h"
#include "src/items/armors/Armor.h"
#include "src/items/armors/Cuirass.h"
#include "src/items/shields/Shield.h"
#include "src/items/shields/Buckler.h"
#include "src/items/weapons/Sword.h"

#include <typeinfo>


int main() {
    Hero *hero = new Hero;
    hero->setHp(50);
    Potion *p = new HpPotion("Healing Salve", 100, 20, 3);
    Axe *axe = new Axe();
    Sword *sword = new Sword();
    Armor *cuirass = new Cuirass();
    Shield *buckler = new Buckler();

    hero->pick(*p);
    hero->pick(*axe);
    hero->pick(*sword);
    hero->pick(*cuirass);
    hero->pick(*buckler);

    std::cout << "\n\n-------------------BEFORE-------------------\n\n";
    std::cout << hero->toString() << std::endl;

    hero->drop(2);
    hero->interact(0);
    hero->interact(1);

    std::cout << "\n\n-------------------AFTER---------------------\n\n";
    std::cout << hero->toString() << std::endl;

    return 0;
}