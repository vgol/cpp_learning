#include <iostream>
#include <limits>


double getYearsPerLetter(const std::string &name, int age);

int main()
{
    std::cout << "Enter your full name ";
    std::string fullName;
    std::getline(std::cin, fullName);
    
    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "You've lived " << getYearsPerLetter(fullName, age)
              << " years for each letter in your name.\n";

    return 0;
}

double getYearsPerLetter(const std::string &name, int age)
{
    return static_cast<double>(age) / name.length();
}
