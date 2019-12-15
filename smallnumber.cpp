// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: Decemeber 2019
// This program finds the smallest random number

#include <iostream>
#include <ctime>
#include <array>

template<size_t N>
int Calculate(std::array<int, N> numberList) {
    // this function finds the smallest number

    // variables
    int smallNumber = 100;

    // process
    for (int counter : numberList) {
        if (counter < smallNumber) {
            smallNumber = counter;
        }
    }

    // output
    return smallNumber;
}

int main() {
    // This function generates 10 random numbers then outputs the smallest

    // seed
    unsigned int seed = time(NULL);

    // variables & arrays
    int randomNumber;
    int smallestNumber;
    std::array<int, 10> randNumber;

    // process
    for (int counter = 0; counter < 10; counter++) {
        randomNumber = rand_r(&seed) % 100;
        std::cout << randomNumber << std::endl;
        randNumber[counter] = randomNumber;
    }

    // calling a function
    smallestNumber = Calculate(randNumber);

    // output
    std::cout << "" << std::endl;
    std::cout << "The smallest number is " << smallestNumber;
}
