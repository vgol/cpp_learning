#include <iostream>
#include "user.h"

double askForNumber()
{
    std::cout << "Enter a number: " << std::flush;
    double num;
    std::cin >> num;

    return num;
}

char askForSign()
{
    std::cout << "Enter an operator (+, -, *, /): " << std::flush;
    char sign;
    std::cin >> sign;

    return sign;
}
