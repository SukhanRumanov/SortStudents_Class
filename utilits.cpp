#include "utilits.hpp"
#include <algorithm>
#include <iostream>

void sortStudents(std::vector<Student>& students) {
    std::sort(students.begin(), students.end());
}

void printStudents(const std::vector<Student>& students) {
    for (const auto& student : students) {
        student.print(std::cout) << std::endl;
    }
}
