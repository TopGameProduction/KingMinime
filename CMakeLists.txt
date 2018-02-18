cmake_minimum_required(VERSION 3.9)
project(KingMinime)

set(CMAKE_CXX_STANDARD 17)

add_executable(KingMinime main.cpp src/Hero.cpp src/Hero.h src/weapons/Weapon.cpp src/weapons/Weapon.h src/Inventory.cpp src/Inventory.h src/weapons/Sword.cpp src/weapons/Sword.h src/weapons/Axe.cpp src/weapons/Axe.h src/weapons/Bow.cpp src/weapons/Bow.h src/item/Item.cpp src/item/Item.h)
