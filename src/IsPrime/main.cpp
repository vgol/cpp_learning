#include <iostream>
#include "IsPrime.h"


int main()
{
    std::cout << "Enter a single digit number: " << std::flush;
    int number;
    std::cin >> number;
    if (number > 9) {
        std::cout << "No way!" << std::endl;
        return 1;
    }

    if (isPrime(number)) {
        std::cout << "Number " << number << " is prime." << std::endl;
    } else {
        std::cout << "Number " << number << " is not prime." << std::endl;
    }

    return 0;
}
