#pragma once
#include <set>
#include "Animal.h"

class Herd {
private:
    std::set<Animal*> animals;

public:
    void addAnimal(Animal* animal);

    void removeAnimal(Animal* animal);

    void showAnimals() const;
};