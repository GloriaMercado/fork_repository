// Cat.h
#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal {
public:
    string color;

    Cat(string name, string color) : Animal(name){
        this->color = color;
    }

    void speak(){
        cout << "I am a cat of color " << color << " and my name is " << name << ". Meow!" << endl;
    }
};

#endif

