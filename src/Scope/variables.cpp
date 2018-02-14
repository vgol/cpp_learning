#include <iostream>

int main()
{
    std::cout << "Enter an integer: " << std::flush;
    int smaller;
    std::cin >> smaller;  // smaller appears here

    std::cout << "Enter a larger integer: " << std::flush;
    int larger;  // larger appears here
    std::cin >> larger;

    if (larger < smaller) {

        std::cout << "Swapping the values...\n";
        int tmp = larger;  // tmp appears here
        larger = smaller;
        smaller = tmp;
    }  // tmp dies here

    std::cout << "The smaller value is " << smaller << std::endl;
    std::cout << "The larger value is " << larger << std::endl;

    return 0;
} // smaller and larger die here.
