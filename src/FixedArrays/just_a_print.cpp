#include <iostream>
#include <limits>


int askUserForInteger();

int main()
{
    auto ask = askUserForInteger();

    int array[] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    int wantedElementIndex(-1);
    std::cout << "Array:\n";
    for (int num = 0; num < (sizeof(array) / sizeof(array[0])); ++num) // NOLINT
    {
        std::cout << array[num] << " ";
        if (array[num] == ask)
        {
            wantedElementIndex = num;
        }
    }
    std::cout << "\n";
    std::cout << "The element you've entered has an index: " << wantedElementIndex << std::endl;

    return 0;
}

int askUserForInteger()
{
    int answer(0);
    do
    {
        std::cout << "Enter an integer from 1 to 9 inclusively: ";
        std::cin >> answer;

        if (std::cin.fail())
        {
            std::cin.clear();
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    while (not (answer >= 1 and answer <= 9));

    return answer;
}
