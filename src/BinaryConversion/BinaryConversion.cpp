#include <iostream>


int askForInt();
int compareAgainstPowOfTwo(int num, int powerOfTwo);

int main()
{
    int num = askForInt();

    num = compareAgainstPowOfTwo(num, 128);
    num = compareAgainstPowOfTwo(num, 64);
    num = compareAgainstPowOfTwo(num, 32);
    num = compareAgainstPowOfTwo(num, 16);
    std::cout << " ";
    num = compareAgainstPowOfTwo(num, 8);
    num = compareAgainstPowOfTwo(num, 4);
    num = compareAgainstPowOfTwo(num, 2);
    compareAgainstPowOfTwo(num, 1);
    std::cout << "\n";

    return 0;
}

int askForInt()
{
    std::cout << "Enter an integer number from 0 to 255 " << std::flush;
    int num;
    std::cin >> num;

    return num;
};

int compareAgainstPowOfTwo(int num, int powerOfTwo)
{
    if (num >= powerOfTwo) {
        std::cout << 1;
        return num - powerOfTwo;
    }
    else {
        std::cout << 0;
        return num;
    }
}

