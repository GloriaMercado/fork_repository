//class inheritance in different files
//Sources :
//https://www.youtube.com/watch?v=WciZZM0sX64
//Done by : Israel Verdin Rangel, Gloria Astrid Mercado Perez
//Date : 02/11/2023
#include "Dog.h"
#include "Cat.h"
#include <iostream>

int main() {
    Dog myDog("Max", "Labrador");
    Cat myCat("Whiskers", "Gray");

    myDog.speak();
    myCat.speak();

    return 0;
}

