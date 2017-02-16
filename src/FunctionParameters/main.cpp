#include <iostream>


using namespace std;

int doubleNumber(int number)
{
    return number * 2;
}

int getNumgerFromUser()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

int main()
{
    cout << "Doubled: " << doubleNumber(getNumgerFromUser()) << endl;
    return 0;
}