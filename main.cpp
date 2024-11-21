#include "utilits.hpp"
#include <iostream>
#include <vector>


int main() {
    std::vector<Student> students = {
        Student("Roman", "Sukhanov"),
        Student("Aaaaa", "Aaaaaa"),
        Student("Ddddddd", "Dddd"),
        Student("Kkkkkkk", "Kkkkkkk")
    };

    std::cout << "No sort:" << std::endl;
    printStudents(students);

    sortStudents(students);

    std::cout << "Sorted:" << std::endl;
    printStudents(students);

    return 0;
}