#include <string>
#include <iostream>


enum class Animal
{
    PIG,
    CHICKEN,
    GOAT,
    CAT,
    DOG,
    OSTRICH,
};

std::string getAnimalName(Animal animal)
{
    switch (animal)
    {
        case Animal::PIG:
            return "pig";
        case Animal::CHICKEN:
            return "chicken";
        case Animal::GOAT:
            return "goat";
        case Animal::CAT:
            return "cat";
        case Animal::DOG:
            return "dog";
        case Animal::OSTRICH:
            return "ostrich";
    }
}

void printNumberOfLegs(Animal animal)
{
    switch (animal)
    {
        case Animal::PIG:
            std::cout << "A " << getAnimalName(animal) << " has 4 legs.\n";
            break;
        case Animal::CHICKEN:
            std::cout << "A " << getAnimalName(animal) << " has 2 legs.\n";
            break;
        case Animal::GOAT:
            std::cout << "A " << getAnimalName(animal) << " has 4 legs.\n";
            break;
        case Animal::CAT:
            std::cout << "A " << getAnimalName(animal) << " has 4 legs.\n";
            break;
        case Animal::DOG:
            std::cout << "A " << getAnimalName(animal) << " has 4 legs.\n";
            break;
        case Animal::OSTRICH:
            std::cout << "A " << getAnimalName(animal) << " has 2 legs.\n";
            break;
    }
}

int main()
{
    printNumberOfLegs(Animal::CAT);
    printNumberOfLegs(Animal::CHICKEN);

    return 0;
}