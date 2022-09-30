// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by KestrelBryce
// Date: Sep. 23, 2022
// This program calculates the cost
// of a pizza with diameter

#include <iostream>

int main() {
    // Declaring constants
    const int LABOUR_COST = 2.00;
    const float RENT_COST = 2.25;
    const float INGREDIENT_COST = 1.5;
    const float HST = 0.13;

    // Declaring variables
    float diameter;
    float subtotal;
    float tax;
    float total;

    // Input
    std::cout << "This program calculates the cost\n";
    std::cout << "of a pizza using it's diameter.\n";
    std::cout << "\n";
    std::cout << "Enter the diameter in inches: ";
    std::cin >> diameter;

    // Process
    subtotal = LABOUR_COST + RENT_COST + INGREDIENT_COST * diameter;
    tax = subtotal * HST;
    total = subtotal + tax;

    // Output
    std::cout << "Your total cost is $" << total << ".\n";
}
