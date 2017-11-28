#include <iostream>
#include "constants.h"
#include "falling_ball.h"


int main()
{
    double initialHeight = fallingBall::getInitialHeight();

    double height{initialHeight};
    int timeInFlight{0};

    while (height > 0 && timeInFlight <= 5) {
        std::cout << "At " << timeInFlight << " seconds, the ball is at height " << height << " meters\n";

        timeInFlight++;
        height = fallingBall::currentHeight(timeInFlight, height);
    }

    if (height <= 0) {
        std::cout << "At " << timeInFlight << " seconds, the ball is on the ground." << std::endl;
    }

    return 0;
}

double fallingBall::getInitialHeight()
{
    std::cout << "Enter initial height: " << std::flush;
    double initialHeight;
    std::cin >> initialHeight;
    return initialHeight;
}

double fallingBall::currentHeight(int timeInFlight, double initialHeight)
{
    return initialHeight - (myConstants::normalGravity * (timeInFlight * timeInFlight)) / 2;
}
