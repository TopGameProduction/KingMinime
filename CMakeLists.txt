cmake_minimum_required(VERSION 3.9)
project(KingMinime)

set(CMAKE_CXX_STANDARD 17)

add_executable(KingMinime main.cpp src/Hero.cpp src/Hero.h src/weapon/Weapon.cpp src/weapon/Weapon.h src/Inventory.cpp src/Inventory.h src/weapon/Sword.cpp src/weapon/Sword.h src/weapon/Axe.cpp src/weapon/Axe.h src/weapon/Bow.cpp src/weapon/Bow.h)
