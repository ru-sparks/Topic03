#include "Student.h"


Student::Student(const std::string& name, int age)
    : name(name), age(age) {}

const std::string& Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

std::ostream& operator<<(std::ostream& os, const Student& student) {
    os << "Name: " << student.name << ", Age: " << student.age;
    return os;
}
