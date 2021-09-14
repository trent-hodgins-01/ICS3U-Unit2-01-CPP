// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 09/13/21
// This program calculates the area and perimeter of a circle
// with a radius of 15mm

#include <iostream>

#include <cmath>

int main() {
    std::cout << "If a circle has a radius of 15mm: " << std::endl;
    std::cout << std::endl;
    std::cout << "Area is " << (M_PI * pow(15, 2)) << "mm2." << std::endl;
    std::cout << "Perimeter is " << (2 * M_PI * 15) << "mm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
