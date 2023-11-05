#include <iostream>
using namespace std;

int main()
{
    double decimalValue = 5.1;

    // Error, must be whole number
    /*switch (decimalValue)
    {

    }*/

    int number = 5;

    switch (number % 10)
    {
    default:
        cout << "Unreachable";
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
        cout << "Odd";
        break;
    case 0:
    case 2:
    case 4:
    case 6:
    case 8:
        cout << "Even";
        break;
    }

    bool isTrue = true;
    // cout << (isTrue == true ? 1337 : "randomText"); // Incompatible types
    cout << (isTrue == true ? 1337 : 'a');
}