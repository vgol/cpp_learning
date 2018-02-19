#include <iostream>

void printSeparator()
{
    std::cout << "===================================" << std::endl;
}

int main()
{
    int outer = 1;
    while (outer <= 5)
    {
        // loop between 1 and outer
        int inner = 1;
        while (inner <= outer)
            std::cout << inner++ << " ";

        // print a newline at the end of each row
        std::cout << "\n";
        ++outer;
    }

    printSeparator();

    outer = 5;
    while (outer >= 1)
    {
        // loop between 1 and outer
        int inner = outer;
        while (inner >= 1)
            std::cout << inner-- << " ";

        // print a newline at the end of each row
        std::cout << "\n";
        --outer;
    }

    printSeparator();

    outer = 1;
    while (outer <= 5)
    {
        int number_of_spaces = 5 - outer;
        while (number_of_spaces >= 1) {
            std::cout << "  ";  // 2 spaces
            --number_of_spaces;
        }
        int inner = outer;
        while (inner > 0) {
            std::cout << inner << " ";
            --inner;
        }
        std::cout << "\n";
        ++outer;
    }

    printSeparator();

    return 0;
}
