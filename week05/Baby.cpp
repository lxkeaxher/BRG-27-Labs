/*
 * ICT167 - Lab Week 5 - Exercise 3
 * Baby class implementation
 */

#include "Baby.h"
#include <algorithm>
#include <cctype>

// Static default name definition
const std::string Baby::DEFAULT_NAME = "Unknown";

// Helper: returns true if the string is empty or contains only whitespace
static bool isBlankOrWhitespace(const std::string& s) {
    if (s.empty()) return true;
    for (char c : s) {
        if (!std::isspace(static_cast<unsigned char>(c))) return false;
    }
    return true;
}

// Helper: converts a string to lowercase for case-insensitive comparison
static std::string toLower(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    return s;
}

Baby::Baby() {
    name = DEFAULT_NAME;
    age  = DEFAULT_AGE;
}

Baby::Baby(std::string babyName, int babyAge) {
    setName(babyName);
    setAge(babyAge);
}

void Baby::setName(std::string babyName) {
    if (isBlankOrWhitespace(babyName)) {
        name = DEFAULT_NAME;
    } else {
        name = babyName;
    }
}

void Baby::setAge(int babyAge) {
    // Valid age is 1 to 4 inclusive
    if (babyAge >= 1 && babyAge <= 4) {
        age = babyAge;
    } else {
        age = DEFAULT_AGE;
    }
}

std::string Baby::getName() const {
    return name;
}

int Baby::getAge() const {
    return age;
}

bool Baby::equals(Baby other) const {
    // Names compared case-insensitively; ages must match exactly
    return (toLower(name) == toLower(other.getName())) && (age == other.getAge());
}
