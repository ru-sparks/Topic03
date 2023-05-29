#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

class Student {
private:
    std::string name;
    int age;

public:
    Student(const std::string& name, int age);

    const std::string& getName() const;
    int getAge() const;

    // Overloading the output stream operator (<<)
    friend std::ostream& operator<<(std::ostream& os, const Student& student);
};

#endif // STUDENT_H
