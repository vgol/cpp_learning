#include <iostream>
#include "IsEven.h"


int main()
{
    int num;

    num = is_even::askForInteger();

    if (is_even::isEven(num)) {
        std::cout << num << " is even.\n";
    }
    else {
        std::cout << num << " isn't even.\n";
    }

    return 0;
}

bool is_even::isEven(int num)
{
    return num % 2 == 0;
}

int is_even::askForInteger()
{
    std::cout << "Enter an integer: ";
    int num;
    std::cin >> num;

    return num;
}
