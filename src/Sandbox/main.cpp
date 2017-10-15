#include <iostream>


int main()
{
    double zero{0.0};
    double posinf = 5.0 / zero;
    std::cout << posinf << std::endl;

    double neginf = -5.0 / zero;
    std::cout << neginf << std::endl;

    double nan = zero / zero;
    std::cout << nan << std::endl;

    return 0;
}
