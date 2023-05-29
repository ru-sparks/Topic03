#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class Person {
private:
    std::string name;
    int age;

public:
    Person(const std::string& name, int age)
        : name(name), age(age) {}

    const std::string& getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    //// Overloading the equality operator (==)
    //bool operator==(const Person& other) const {
    //    return (name == other.name && age == other.age);
    //}
};

int main() {
    std::vector<Person> people;

    // Create some Person objects and add them to the vector
    people.push_back(Person("Alice", 25));
    people.push_back(Person("Bob", 30));
    people.push_back(Person("Charlie", 40));

    // Search for a specific person using std::find
    Person target("Bob", 30);
    auto it = std::find(people.begin(), people.end(), target);

    if (it != people.end()) {
        std::cout << "Person found: " << it->getName() << ", " << it->getAge() << std::endl;
    }
    else {
        std::cout << "Person not found." << std::endl;
    }

    return 0;
}
