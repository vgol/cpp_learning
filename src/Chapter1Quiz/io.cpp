#include <iostream>
#include "io.h"


int readNumber()
{
    int number;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> number;
    return number;
}

void writeAnswer(int number)
{
    std::cout << "Answer is " << number << std::endl;
}
