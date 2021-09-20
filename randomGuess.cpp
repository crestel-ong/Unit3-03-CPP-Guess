// Copyright (c) Crestel Ong All rights reserved
//
// Created by: Crestel
// Created on: Sep 2019
// This program sees if you can guess the number its thinking

#include <iostream>
#include <random>

int main() {
    // this function sees if you can guess the number its thinking of

    // this is a module and part that will generate the number
    int someRandomNumber;
    int guessNumber;


    // input
    std::cout << "Enter a number between 1-10: ";
    std::cin >> guessNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int>idist(0, 10);
    someRandomNumber = idist(rgen);

    // process
    if (guessNumber == someRandomNumber) {
        // output 1
        std::cout << "You guessed correctly!";
    } else {
        std::cout << "Incorrect, the number is " << std::fixed
        << someRandomNumber << "." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
