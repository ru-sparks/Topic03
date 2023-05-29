// 00_GettersAndSetters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyClass.h"

using namespace std;

int main() {
    MyClass obj;
    obj.setMyData(42); // Set myData to 42
    cout << obj.getMyData(); // Retrieve the value of myData
    return 0;
}