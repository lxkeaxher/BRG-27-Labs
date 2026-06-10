/*
 * ICT167 - Lab Week 5 - Exercise 3
 * Baby class declaration (header file)
 *
 * UML summary:
 * +---------------------------+
 * |          Baby             |
 * +---------------------------+
 * | - name : string           |
 * | - age  : int              |
 * +---------------------------+
 * | + Baby()                  |
 * | + Baby(string, int)       |
 * | + setName(string) : void  |
 * | + setAge(int)     : void  |
 * | + getName() : string      |
 * | + getAge()  : int         |
 * | + equals(Baby) : bool     |
 * +---------------------------+
 *
 * Instance variables are private (encapsulation).
 * All access is through public get/set methods.
 * No I/O is performed inside the class.
 */

#ifndef BABY_H
#define BABY_H

#include <string>

class Baby {
private:
    std::string name;
    int age;

    // Default values used when invalid input is supplied
    static const std::string DEFAULT_NAME;
    static const int DEFAULT_AGE = 1;

public:
    // Default constructor: sets name and age to defaults
    Baby();

    // Parameterised constructor
    Baby(std::string babyName, int babyAge);

    // Setters (validate input; use defaults on invalid values)
    void setName(std::string babyName);
    void setAge(int babyAge);

    // Getters
    std::string getName() const;
    int getAge() const;

    // Returns true if both name (case-insensitive) and age match
    bool equals(Baby other) const;
};

#endif
