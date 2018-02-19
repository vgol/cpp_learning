#include <iostream>

int sumTo(int value)
{
    int sum(0);
    for (int num=0; num <= value; ++num) {
        sum += num;
    }
    return sum;
}

int main()
{
    std::cout << "Enter an integer: ";
    int num;
    std::cin >> num;

    std::cout << "The sum from 1 to " << num << " is " << sumTo(num) << std::endl;

    return 0;
}
