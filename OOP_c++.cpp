/*
second partial exam of advanced programming
Done by:
• Gloria Astrid Mercado Pérez
• Israel Verdin Rangel
Date: 27/10/2023
Edited: 29/10/2023
*/
#include <iostream>
#include <string>

using namespace std;

// Abstract class
class LivingBeing {
public:
    virtual void birth() = 0;
};

class Animal : public LivingBeing {
public:
    string food;
    string gender;

    Animal(string food, string gender)
        : food(food), gender(gender) {}

    Animal(const Animal& other) {
        food = other.food;
        gender = other.gender;
    }

    ~Animal() {
        cout << "Destroying animal" << endl;
    }

    void eat() {
        cout << "I am eating" << endl;
    }

    void birth() override {
        cout << "Being born as an animal" << endl;
    }
};

class Plant : public LivingBeing {
public:
    string color;
    string plantType;

    Plant(string color, string plantType)
        : color(color), plantType(plantType) {}

    Plant(const Plant& other) {
        color = other.color;
        plantType = other.plantType;
    }

    ~Plant() {
        cout << "Destroying plant" << endl;
    }

    void photosynthesis() {
        cout << "Producing O2" << endl;
    }

    void birth() override {
        cout << "Being born as a plant" << endl;
    }
};

class Mammal : public Animal {
public:
    int weight;
    int offspring;

    Mammal(string food, string gender, int weight, int offspring)
        : Animal(food, gender), weight(weight), offspring(offspring) {}

    Mammal(const Mammal& other)
        : Animal(other), weight(other.weight), offspring(other.offspring) {}

    ~Mammal() {
        cout << "Destroying mammal" << endl;
    }

    void reproduce() {
        cout << "Being born from the mother's womb" << endl;
    }

    void birth() override {
        cout << "Being born as a mammal" << endl;
    }
};

class Reptile : public Animal {
public:
    bool coldBlooded;

    Reptile(string food, string gender, bool coldBlooded)
        : Animal(food, gender), coldBlooded(coldBlooded) {}

    Reptile(const Reptile& other)
        : Animal(other), coldBlooded(other.coldBlooded) {}

    ~Reptile() {
        cout << "Destroying reptile" << endl;
    }

    void reproduce() {
        cout << "Laying eggs" << endl;
    }

    void birth() override {
        cout << "Being born as a reptile" << endl;
    }
};

class Tree : public Plant {
public:
    string treeType;

    Tree(string color, string plantType, string treeType)
        : Plant(color, plantType), treeType(treeType) {}

    Tree(const Tree& other)
        : Plant(other), treeType(other.treeType) {}

    ~Tree() {
        cout << "Destroying tree" << endl;
    }

    void bearFruits() {
        cout << "Producing fruits" << endl;
    }

    void birth() override {
        cout << "Being born as a tree" << endl;
    }
};

class Fern : public Plant {
public:
    int height;

    Fern(string color, string plantType, int height)
        : Plant(color, plantType), height(height) {}

    Fern(const Fern& other)
        : Plant(other), height(other.height) {}

    ~Fern() {
        cout << "Destroying fern" << endl;
    }

    void attractLuck() {
        cout << "Wishing luck for everyone" << endl;
    }

    void birth() override {
        cout << "Being born as a fern" << endl;
    }
};

class Platypus : public Reptile, public Mammal {
public:
    bool venomous;

    Platypus(string food, string gender, bool coldBlooded, int weight, int offspring, bool venomous)
        : Reptile(food, gender, coldBlooded), Mammal(food, gender, weight, offspring), venomous(venomous) {}

    Platypus(const Platypus& other)
        : Reptile(other), Mammal(other), venomous(other.venomous) {}

    ~Platypus() {
        cout << "Destroying Platypus" << endl;
    }

    void reproduction() {
        cout << "Special reproduction of the platypus" << endl;
    }

    void swim() {
        cout << "I am swimming" << endl;
    }

    void birth() override {
        cout << "Being born as a platypus" << endl;
    }
};

int main() {
    // Create instances of the classes
    Animal animal("meat", "male");
    Plant plant("green", "moss");
    Tree tree("green", "apple tree", "apple tree");
    Fern fern("green", "bush", 20);
    Reptile reptile("insects", "male", true);
    Mammal mammal("plants", "female", 3, 100);
    Platypus platypus("algae", "female", false, 45, 1, true);

    // Calls to methods of the Animal class
    animal.eat();
    animal.birth();

    // Calls to methods of the Plant class
    plant.photosynthesis();
    plant.birth();

    // Calls to methods of the Tree class
    tree.bearFruits();
    tree.birth();

    // Calls to methods of the Fern class
    fern.attractLuck();
    fern.birth();

    // Calls to methods of the Reptile class
    reptile.reproduce();
    reptile.birth();

    // Calls to methods of the Mammal class
    mammal.reproduce();
    mammal.birth();

    // Calls to methods of the Platypus class
    platypus.reproduction();
    platypus.swim();
    platypus.birth();

    return 0;
}
