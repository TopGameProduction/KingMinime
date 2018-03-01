#include <iostream>
#include "src/Hero.h"
#include "src/items/consumables/HpPotion.h"
#include "src/items/weapons/Axe.h"
#include "src/items/armors/Armor.h"
#include "src/items/armors/Cuirass.h"
#include "src/items/shields/Shield.h"
#include "src/items/shields/Buckler.h"

#include <typeinfo>


int main() {
    /*
    Hero *hero = new Hero;
    Potion *p = new HpPotion("Healing Salve", 100, 20, 3);
    hero->setHp(50);
    hero->use(p);
     */

    Hero *hero = new Hero;
    hero->setHp(50);
    Potion *p = new HpPotion("Healing Salve", 100, 20, 3);
    Axe *axe = new Axe();
    Armor *cuirass = new Cuirass();
    Shield *buckler = new Buckler();

    hero->pick(*p);
    hero->pick(*axe);
    hero->pick(*cuirass);
    hero->pick(*buckler);

    hero->drop(2);

    std::cout << p->toString() << std::endl;

    hero->interact(0);

    std::cout << hero->toString() << std::endl;

    return 0;
}