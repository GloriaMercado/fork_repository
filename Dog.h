#ifndef DOG_H
#define DOG_H

#include "Animal.h"
using namespace std;

class Dog : public Animal {
public:
    string breed;

    Dog(string name, string breed) : Animal(name){
        this->breed = breed;
    }

    void speak(){
        cout << "I am a dog of breed " << breed << " and my name is " << name << ". Woof!" << endl;
    }
};

#endif
