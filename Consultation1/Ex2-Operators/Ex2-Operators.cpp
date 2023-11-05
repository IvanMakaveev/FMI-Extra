#include <iostream>
using namespace std;

int main()
{
    int number = 5;
    int secondNumber = 6;
    number = 10;
    // 10 = number; // Does not compile since it expects an LValue!
    number = secondNumber; // We can use an LValue's data instead of an RValue

    (++number) += 10; // Works as intended -> number will be 16
    // (number++) += 10; // Does not compile! LValue expected

    int x = 6;
    cout << (x = 2) + (x = 3) << endl; // Equal returns an LValue so we have x + x, which is 3 + 3
}