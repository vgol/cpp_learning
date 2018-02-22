#include <iostream>
#include <utility>


void printArray(const int array[], int length);

int main()
{
    const int length(9);
    int array[length] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };

    for (int iter = 0; iter < length - 1; ++iter)
    {
        for (int inx = 0; inx < length - 1; ++inx)
        {
            if (array[inx] > array[inx + 1])
            {
                std::swap(array[inx], array[inx + 1]);
            }
        }
    }

    printArray(array, length);

    return 0;
}

void printArray(const int array[], int length)
{
    for (int inx = 0; inx < length; ++inx)
    {
        std::cout << array[inx] << " ";
    }
    std::cout << '\n';
}
