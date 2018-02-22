#include <iostream>
#include "src/Hero.h"
#include "src/items/consumables/HpPotion.h"
#include "src/items/weapons/Axe.h"
#include "src/items/armors/Armor.h"
#include "src/items/armors/Cuirass.h"
#include "src/items/shields/Shield.h"
#include "src/items/shields/Buckler.h"


int main() {
    /*
    Hero *hero = new Hero;
    Potion *p = new HpPotion("Healing Salve", 100, 20, 3);
    hero->setHp(50);
    hero->use(p);
     */



    Inventory *inv = new Inventory(6);
    Potion *p = new HpPotion("Healing Salve", 100, 20, 3);
    Axe *axe = new Axe();
    Armor *cuirass = new Cuirass();
    Shield *buckler = new Buckler();


    inv->addItem(*p);
    inv->addItem(*axe);
    inv->addItem(*cuirass);
    inv->addItem(*buckler);

    inv->removeItem(2);

    std::cout << inv->toString();

    return 0;
}