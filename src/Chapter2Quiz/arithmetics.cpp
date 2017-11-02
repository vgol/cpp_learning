#include <iostream>
#include "user.h"
#include "arithmetics.h"


int main()
{
    double first;
    double second;
    char sign;

    first = askForNumber();
    second = askForNumber();
    sign = askForSign();

    performOperation(first, second, sign);

    return 0;
}

void performOperation(double first, double second, char sign)
{
    if (sign == '+') {
        std::cout << first + second << '\n';
    } else if (sign == '-') {
        std::cout << first - second << '\n';
    } else if (sign == '*') {
        std::cout << first * second << '\n';
    } else if (sign == '/') {
        std::cout << first / second << '\n';
    }
}
