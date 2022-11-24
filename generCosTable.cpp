// Copyright (c) 2022 Spencer Scarlett All rights reserved.
// .
// Created by: Spencer Scarlett
// Created on: Nov 13, 2022
// This is a program that generates the COS table from angles 0 to 360

#include <iostream>
#include <cmath>

// Function
void CosTable() {
    // variables
    int counter;
    double current;

    counter = 0;
    // While true from 0 - 360
    while (counter != 360) {
        // To convert a number to COS value
        current = cos(counter);

        // Displays outcome
        std::cout << "Cos Value " << current << " = " << current << "\n";

        // Too move on to the next number and repent the process
        counter = counter + 1;
    }
}

int main() {
    // Calling function
    CosTable();
}
