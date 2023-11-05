#include <iostream>
using namespace std;

int a = 10;

int main()
{
    int a = 5;
    cout << "Local: " << a << endl;
    cout << "Global: " << ::a << endl;

    {
        int a = 7;
        cout << "Local: " << a << endl;
        cout << "Global: " << ::a << endl;
    }

    for (int a = 0; a < 5; a++)
    {
        cout << "Local: " << a << endl;
        cout << "Global: " << ::a << endl;
    }

    if (a == 5)
    {
        int a = 9;
        cout << "Local: " << a << endl;
        cout << "Global: " << ::a << endl;
    }
}