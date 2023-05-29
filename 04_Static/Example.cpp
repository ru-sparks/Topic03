#include "Example.h"
#include <iostream>

int Example::staticData = 0;  // Definition of static data member

void Example::staticMethod() {
    std::cout << "Static method called" << std::endl;
    // Accessing static data member
    std::cout << "Static data value: " << staticData << std::endl;
    // Modifying static data member
    staticData++;
}

