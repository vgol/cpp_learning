#include <iostream>


void printChars(const char *string);

int main()
{
    char name[] = "Jason";

    printChars(name);

    return 0;
}

void printChars(const char *string)
{
    std::cout << *string << ' ';
    std::cout << *(string + 1) << '\n';
}