#pragma once
class MyClass {
private:
    int myData; // Private data member

public:
    // Getter function
    /*
    The getter function should have a return type matching the data member's type.
    It should be declared as a const member function if it doesn't modify the object's state.
    It should typically have a simple implementation that returns the value of the data member.
    
*/
    int getMyData() const {
        return myData;
    }

    // Setter function
    void setMyData(int newData) {
        myData = newData;
    }
};
