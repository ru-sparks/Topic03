#pragma once
#include <string>


class Animal {
private:
    std::string name;
    int age;

public:
    Animal(const std::string& animalName, int animalAge)
        : name(animalName), age(animalAge) {}

    std::string getName() const;

    int getAge() const;
};


