/*
Use of inheritance in POO II
Done by:
• Gloria Astrid Mercado Pérez
• Israel Verdin Rangel
Date: 12/11/2023
*/
#include <iostream>
#include <string>

using namespace std;

// Base class (parent) named "Animal"
class Animal {
public:
    // Constructor
    Animal(const string& name) : name_(name) {}

    // Virtual method that can be overridden by derived classes
    virtual void makeSound() const {
        cout << "Making a sound like a generic animal." << endl;
    }

    // Method to get the name of the animal
    string getName() const {
        return name_;
    }

private:
    string name_;
};

// Derived class (child) named "Dog" that inherits from the "Animal" class
class Dog : public Animal {
public:
    // Constructor that calls the base class constructor and assigns a specific breed
    Dog(const string& name, const string& breed) : Animal(name), breed_(breed) {}

    // Override the makeSound method to represent a dog's bark
    void makeSound() const override {
        cout << "The dog " << getName() << " is barking." << endl;
    }

private:
    string breed_;
};

// Derived class (child) named "Cat" that inherits from the "Animal" class
class Cat : public Animal {
public:
    // Constructor that calls the base class constructor and assigns a specific breed
    Cat(const string& name, const string& breed) : Animal(name), breed_(breed) {}

    // Override the makeSound method to represent a cat's meow
    void makeSound() const override {
        cout << "The cat " << getName() << " is meowing." << endl;
    }

private:
    string breed_;
};

int main() {
    cout << "Welcome to the Pet Program." << endl;

    cout << "Enter the name of your dog: ";
    string dogName;
    cin >> dogName;
    Dog myDog(dogName, "Labrador");

    cout << "Enter the name of your cat: ";
    string catName;
    cin >> catName;
    Cat myCat(catName, "Siamese");

    cout << "What does your dog do? ";
    myDog.makeSound();

    cout << "What does your cat do? ";
    myCat.makeSound();

    return 0;
}
