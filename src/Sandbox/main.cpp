#include <iostream>


void sayHey()
{
    std::cout << "hey!" << std::endl;
}

int main()
{
    double zero{0.0};
    double posinf = 5.0 / zero;
    std::cout << posinf << std::endl;

    double neginf = -5.0 / zero;
    std::cout << neginf << std::endl;

    double nan = zero / zero;
    std::cout << nan << std::endl;

    int64_t num{};
    std::cout << num << std::endl;

    char chr{};
    std::cout << "chr: \"" << chr << "\"" << std::endl;

    sayHey();

    char myChar{97};
    std::cout << myChar << std::endl;
    myChar = 'A';
    std::cout << myChar << std::endl;

    int8_t myAnotherChar{97};
    std::cout << myAnotherChar << std::endl;

    std::cout << static_cast<int>(myChar) << std::endl;
    int longInt{2'000'000};
    std::cout << longInt << "\n";
    int bin{0b1101'0001};
    std::cout << bin << '\n';

    char null{'\0'};
    std::cout << null << '\n';

    return 0;
}
