#include <iostream>


namespace animals
{
enum animalTypes
{
    CHICKEN,
    DOG,
    CAT,
    ELEPHANT,
    DUCK,
    SNAKE,
};
} // animals

int main()
{
    using namespace animals;

    int animalsLegs[] = {2, 4, 4, 4, 2, 0};
    int animalsLegsLength = sizeof(animalsLegs) / sizeof(animalsLegs[animalTypes::CHICKEN]);

    for (int animal=0; animal < animalsLegsLength; ++animal)
    {
        std::cout << animalsLegs[animal] << " ";
    }
    std::cout << "\n";

    return 0;
}
