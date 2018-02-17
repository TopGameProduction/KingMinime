cmake_minimum_required(VERSION 3.9)
project(KingMinime)

set(CMAKE_CXX_STANDARD 17)

add_executable(KingMinime main.cpp src/Hero.cpp src/Hero.h src/Weapon.cpp src/Weapon.h src/Inventar.cpp src/Inventar.h)
