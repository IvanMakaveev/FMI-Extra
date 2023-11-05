#include <iostream>
using namespace std;

int main()
{
    bool isTrue = true; // 0 or 1

    char symbol = 'a'; // between -128 and 127

    int wholeNumber = 10; // between -2147483648 and 2147483647

    double decimalNumber = 2.134; // very large values and also floating points
    
    cout << "Double loss of information: " << (int)decimalNumber << endl;
    cout << "Integer no loss of information: " << (double)wholeNumber << endl;
}