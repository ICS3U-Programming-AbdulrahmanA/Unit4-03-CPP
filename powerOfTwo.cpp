// Copyright (c) 2025 Brandon All rights reserved.

// Created By: Brandon

// Date: November 18th, 2025

// This program asks the user for the number and

// then calculates the power of two using a for loop

#include <cmath>
#include <iostream>
#include <string>

int main() {
    std::string numberAsString;

    std::cout << "Enter a whole number: ";

    std::cin >> numberAsString;

    try {
        int number = std::stoi(numberAsString);

        // Determine whether or not the number is positive

        if (number < 0) {
            std::cout << "Please enter a positive number\n";

        } else {
            // Uses a for loop to calculate the power of two

            for (int counter = 0; counter <= number; counter++) {
                int answer = (std::pow(counter, 2));

                std::cout << counter << "^2 = " << answer << std::endl;
            }
        }

    } catch (const std::invalid_argument&) {
        std::cout << "That is not a valid integer\n";
    }
}