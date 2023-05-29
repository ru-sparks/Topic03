#include "Herd.h"

#include <iostream>

void Herd::addAnimal(Animal* animal) {
    animals.insert(animal);
}

void Herd::removeAnimal(Animal* animal) {
    animals.erase(animal);
}

void Herd::showAnimals() const {
    for (const auto& animal : animals) {
        std::cout << "Name: " << animal->getName() << ", Age: " << animal->getAge() << std::endl;
    }
}