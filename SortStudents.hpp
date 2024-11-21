#pragma once

#include <string>
#include <iostream>
#include <compare>

class Student {
    std::string name;
    std::string surname;

public:
    Student(const std::string& name, const std::string& surname);

    std::string getName() const;
    std::string getSurname() const;

    std::strong_ordering operator<=>(const Student& other) const;

    std::ostream& print(std::ostream& os) const;
};