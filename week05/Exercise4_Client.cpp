/*
 * ICT167 - Lab Week 5 - Exercise 4
 * Client program to test the Baby class.
 * Stores 4 Baby objects in an array, displays details, calculates
 * average age, and checks whether any two babies are the same.
 */

#include <iostream>
#include <iomanip>
#include "Baby.h"

const int NUM_BABIES = 4;

int main() {
    Baby babies[NUM_BABIES];  // Array of Baby objects

    // --- Part a: Enter details for each baby ---
    std::cout << "=== Enter details for " << NUM_BABIES << " babies ===\n";
    for (int i = 0; i < NUM_BABIES; i++) {
        std::string inputName;
        int inputAge;

        std::cout << "\nBaby " << (i + 1) << ":\n";
        std::cout << "  Name: ";
        std::cin >> inputName;
        std::cout << "  Age (1-4): ";
        std::cin >> inputAge;

        babies[i].setName(inputName);
        babies[i].setAge(inputAge);
    }

    // --- Part b: Output details of each baby ---
    std::cout << "\n=== Baby Details ===\n";
    std::cout << std::left << std::setw(12) << "Name" << "Age\n";
    std::cout << "---------------\n";
    for (int i = 0; i < NUM_BABIES; i++) {
        std::cout << std::left << std::setw(12) << babies[i].getName()
                  << babies[i].getAge() << "\n";
    }

    // --- Part c: Calculate and display average age ---
    double totalAge = 0;
    for (int i = 0; i < NUM_BABIES; i++) {
        totalAge += babies[i].getAge();
    }
    double avgAge = totalAge / NUM_BABIES;
    std::cout << "\nAverage age: " << std::fixed << std::setprecision(2) << avgAge << "\n";

    // --- Part d: Determine whether any two babies are the same ---
    std::cout << "\n=== Checking for duplicate babies ===\n";
    bool foundDuplicate = false;
    for (int i = 0; i < NUM_BABIES - 1; i++) {
        for (int j = i + 1; j < NUM_BABIES; j++) {
            if (babies[i].equals(babies[j])) {
                std::cout << "Baby " << (i + 1) << " (" << babies[i].getName()
                          << ", age " << babies[i].getAge()
                          << ") and Baby " << (j + 1)
                          << " (" << babies[j].getName()
                          << ", age " << babies[j].getAge()
                          << ") are the same.\n";
                foundDuplicate = true;
            }
        }
    }
    if (!foundDuplicate) {
        std::cout << "No two babies are the same.\n";
    }

    return 0;
}
