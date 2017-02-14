#include <iostream>

using namespace std;

int getValueFromUser()
{
    cout << "Enter a number: ";
    int number;
    cin >> number;
    return number;
}

int main()
{
    int first;
    int second;

    first = getValueFromUser();
    second = getValueFromUser();
    cout << first << "+" << second << "=" << first + second << endl;
    return 0;
}