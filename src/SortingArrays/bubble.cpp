#include <iostream>
#include <utility>


void printArray(const int array[], int length);

int main()
{
    const int length(9);
    int array[length] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    int sortedFromTheEnd(1);

    for (int iter = 0; iter < length - 1; ++iter)
    {
        bool something_was_swapped(false);

        for (int inx = 0; inx < length - sortedFromTheEnd; ++inx)
        {
            if (array[inx] > array[inx + 1])
            {
                std::swap(array[inx], array[inx + 1]);
                something_was_swapped = true;
            }
        }
        if (not something_was_swapped){
            std::cout << "\nIt is already sorted! Iteration: " << iter << '\n';
            break;
        }
        ++sortedFromTheEnd;
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
