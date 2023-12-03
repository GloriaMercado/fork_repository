// Animal.h
#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

using namespace std;

class Animal {
public:
    string name;

    Animal(string name){
        this->name = name;
    }

    void speak();
};

#endif

