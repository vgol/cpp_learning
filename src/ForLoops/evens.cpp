#include <iostream>

int main()
{
    for (int num=0; num <= 20; ++num) {
        if (num % 2 == 0) {
            std::cout << num << " ";
        }
    }

    std::cout << "\n";

    return 0;
}
