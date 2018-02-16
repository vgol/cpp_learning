#include <iostream>

enum class ReturnValues
{
    SUCCESS,
    UNRECOGNIZED_OPERATION,
};

struct Calculation
{
    int result;
    ReturnValues retval;
};

Calculation calculate(int first, int second, char sign)
{
    switch (sign)
    {
        case '+':
            return Calculation {first + second, ReturnValues::SUCCESS};
        case '-':
            return Calculation {first - second, ReturnValues::SUCCESS};
        case '*':
            return Calculation {first * second, ReturnValues::SUCCESS};
        case '/':
            return Calculation {first / second, ReturnValues::SUCCESS};

        default:
            return Calculation {0, ReturnValues::UNRECOGNIZED_OPERATION};
    }
}

int main()
{
    std::cout << "Enter an two integers: ";
    int x, y;
    std::cin >> x;
    std::cin >> y;

    std::cout << "Enter a sign of operation (+, -, *, /): ";
    char sign;
    std::cin >> sign;

    auto result = calculate(x, y, sign);

    if (result.retval == ReturnValues::UNRECOGNIZED_OPERATION) {
        std::cout << "Unrecognized operation " << sign;
        return static_cast<int>(result.retval);
    }

    std::cout << x << " " << sign << " " << y << " = " << result.result << std::endl;

    return 0;
 }