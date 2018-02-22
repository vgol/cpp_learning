#include <iostream>

int main()
{
    int scores[] = { 84, 92, 76, 81, 56 };
    const int numStudents = sizeof(scores) / sizeof(scores[0]);

    int maxIndex = 0; // keep track of our largest score

    // now look for a larger score
    for (int studentIndex = 0; studentIndex < numStudents; ++studentIndex) // NOLINT
        if (scores[studentIndex] > scores[maxIndex])
            maxIndex = studentIndex;

    std::cout << "The best score was " << scores[maxIndex] <<
              " and it has index in array - " << maxIndex << ".\n";

    return 0;
}
