/*
 * ICT167 - Lab Week 5 - Exercise 1
 * Program to generate and store random integers, then display stats.
 *
 * Static variables/methods: Static is NOT appropriate here because the array
 * size is determined at runtime from user input, and the data (array, min, max,
 * average) is specific to a single execution context -- not shared state across
 * multiple instances or class-level behaviour. All values are local to the
 * program's execution and passed between modular functions via parameters.
 */

#include <iostream>
#include <random>
#include <iomanip>

// Fills the array with random integers in [1, 999]
void generateNumbers(int arr[], int size) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 999);
    for (int i = 0; i < size; i++) {
        arr[i] = dis(gen);
    }
}

// Returns the smallest value in the array
int findMin(const int arr[], int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
    }
    return minVal;
}

// Returns the largest value in the array
int findMax(const int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    return maxVal;
}

// Returns the average of all values in the array
double findAverage(const int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

// Prints the array contents, five numbers per line
void printNumbers(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(4) << arr[i];
        if ((i + 1) % 5 == 0 || i == size - 1) {
            std::cout << "\n";
        } else {
            std::cout << " ";
        }
    }
}

int main() {
    int count;
    std::cout << "How many random numbers to generate? ";
    std::cin >> count;

    if (count <= 0) {
        std::cout << "Please enter a positive number.\n";
        return 1;
    }

    int* numbers = new int[count];

    generateNumbers(numbers, count);

    int smallest = findMin(numbers, count);
    int largest  = findMax(numbers, count);
    double avg   = findAverage(numbers, count);

    std::cout << "\nGenerated numbers:\n";
    printNumbers(numbers, count);

    std::cout << "\nSmallest : " << smallest << "\n";
    std::cout << "Largest  : " << largest  << "\n";
    std::cout << "Average  : " << std::fixed << std::setprecision(2) << avg << "\n";

    delete[] numbers;
    return 0;
}
