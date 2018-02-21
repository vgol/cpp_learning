#include <random>
#include <iostream>
#include <ctime>
#include "hilo.h"


int main()
{
    hilo::playMultipleTimes();
    // hilo::playHiLo();

    return 0;
}

int hilo::getRandomNumber(int min, int max)
{
    // Should work but don't due to compiler's bug (they say so...).
    // static std::random_device rd;
    // static std::mt19937 mersenne{rd()};

    // initialize our mersenne twister with a random seed
    static std::mt19937 mersenne(static_cast<unsigned int>(time(nullptr)));
    static const double fraction = 1.0 / (static_cast<double>(mersenne.max()) + 1.0);
    return min + static_cast<int>((max - min + 1) * (mersenne() * fraction));
}

void hilo::playHiLo()
{
    auto key = getRandomNumber(hilo::min, hilo::max);

    std::cout << "Let's play a game.  I'm thinking of a number."
            "  You have 7 tries to guess what it is.\n";

    for (int guessNum = 0; guessNum <= 7; ++guessNum)
    {
        auto guess = getIntNum(guessNum);

        if (guess == key)
        {
            std::cout << "Correct! You win!\n";
            return;
        }
        else if (guess > key)
        {
            std::cout << "Your guess is too high.\n";
        }
        else
        {
            std::cout << "Your guess is too low.\n";
        }
    }

    std::cout << "Sorry, you lose.  The correct number was " << key << ".\n";
}

int hilo::getIntNum(int guessNum)
{
    while (true)
    {
        std::cout << "Guess #" << guessNum << ": ";
        int guess;
        std::cin >> guess;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return guess;
        }
    }
}

char hilo::getYesOrNo()
{
    char answer(0);
    do
    {
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> answer;
        if (std::cin.fail())
        {
            std::cin.clear();
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    while (not (answer == 'y' or answer == 'n' or answer == 'Y' or answer == 'N'));

    return answer;
}

void hilo::playMultipleTimes()
{
    char answer(0);
    do
    {
        playHiLo();
        answer = getYesOrNo();
    }
    while (answer == 'y' or answer == 'Y');

    std::cout << "Thank you for playing.\n";
}
