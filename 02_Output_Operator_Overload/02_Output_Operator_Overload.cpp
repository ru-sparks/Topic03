#include <iostream>
#include "student.h"

int main() {

	Student student("Alice", 20);
	Student student2("Mark", 19);

	// Output the student using the overloaded << operator
	std::cout << "Student: " << student << std::endl << "Student2: " << student2 << std::endl;

	return 0;
}
