#include "Fraction.h"
#include <iostream>

using frcn = frac::Fraction;

double frac::multiplyFractions(frcn first, frcn second)
{
    return (static_cast<double>(first.numerator) * second.numerator) /
            (first.denominator * second.denominator);
}

frcn frac::requestFraction()
{
    frcn fraction {};
    std::cout << "Enter a numerator of fraction: ";
    std::cin >> fraction.numerator;

    std::cout << "Enter a numerator of fraction: ";
    std::cin >> fraction.denominator;

    return fraction;
}

int main()
{
    frcn first = frac::requestFraction();
    frcn second = frac::requestFraction();

    std::cout << frac::multiplyFractions(first, second) << std::endl;
}
