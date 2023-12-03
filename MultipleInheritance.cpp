/*
Code where multiple inheritance is used
Done by:
• Gloria Astrid Mercado Pérez
• Israel Verdin Rangel
Date: 14/10/2023
*/
#include <iostream>
#include <string>

using namespace std;

// Base class Animal
class Animal {
protected:
    string name;
    int age;

public:
    // Animal constructor
    Animal(string name, int age) : name(name), age(age) {}

    // Virtual method sound() with default implementation
    virtual void sound() const {
        cout << name << " makes a generic sound" << endl;
    }
};

// Derived class Mammal
class Mammal : public Animal {
protected:
    int avgOffspring; 

public:
    // Mammal constructor
    Mammal(string name, int age, int avgOffspring)
        : Animal(name, age), avgOffspring(avgOffspring) {}

    // Implementation of the sound() method for Mammal
    void sound() const override {
        cout << name << " makes a mammal sound" << endl;
    }
};

// Derived class Bird
class Bird : public Animal {
protected:
    string feeding; 

public:
    // Bird constructor
    Bird(string name, int age, string feeding)
        : Animal(name, age), feeding(feeding) {}

    // Implementation of the sound() method for Bird
    void sound() const override {
        cout << name << " sings like a bird" << endl;
    }
};

// Derived class Bat (inherits from Mammal and Bird)
class Bat : public Mammal, public Bird {
public:
    // Constructor for Bat that initializes attributes from both base classes and Bat
    Bat(string name, int age, int avgOffspring, string feeding)
        : Mammal(name, age, avgOffspring), Bird(name, age, feeding) {}

    // Implementation of the sound() method for Bat
    void sound() const override {
        // In this case, we opt for the implementation from Mammal
        Mammal::sound();
    }
};

int main() {
    // Create an instance of the Bat class with a name, age, and additional attributes
    Bat bat("fangs", 3, 2, "Fruits");

    // Call the sound() method of the bat class
    bat.sound();  
    return 0;
}

