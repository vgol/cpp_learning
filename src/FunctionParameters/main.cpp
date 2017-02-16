#include <iostream>


using namespace std;

int doubleNumber(int number)
{
    return number * 2;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;
    cout << "Doubled: " << doubleNumber(num) << endl;

    return 0;
}