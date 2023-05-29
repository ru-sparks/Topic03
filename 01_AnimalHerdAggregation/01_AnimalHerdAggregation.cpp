// 01_AnimalHerdAggregation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Herd.h"

int main() {
    Herd herd;

    // Creating animal instances
    Animal* animal1 = new Animal("Lion", 5);
    Animal* animal2 = new Animal("Elephant", 10);
    Animal* animal3 = new Animal("Giraffe", 7);

    // Adding animals to the herd
    herd.addAnimal(animal1);
    herd.addAnimal(animal2);
    herd.addAnimal(animal3);

    // Showing animals in the herd
    herd.showAnimals();

    // Removing an animal from the herd
    herd.removeAnimal(animal2);

    // Showing animals in the herd after removal
    herd.showAnimals();

    // Clean up memory
    delete animal1;
    delete animal2;
    delete animal3;

    return 0;
}
