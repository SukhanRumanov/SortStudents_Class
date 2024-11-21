#include "SortStudents.hpp"


Student::Student(const std::string& name, const std::string& surname)
    : name(name), surname(surname) {}

std::string Student::getName() const { return name; }
std::string Student::getSurname() const { return surname; }

std::strong_ordering Student::operator<=>(const Student& other) const {
    if (auto cmp = surname <=> other.surname; cmp != 0) {
        return cmp;
    }
    return name <=> other.name;
}

std::ostream& Student::print(std::ostream& os) const {
    os << surname << " " << name;
    return os;
}