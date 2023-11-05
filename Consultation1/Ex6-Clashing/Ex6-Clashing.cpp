#include <iostream>
using namespace std;

void f(int param1 = 5)
{
    cout << "F with Int";
}

void f()
{
    cout << "Empty F";
}

// Error - cannot distinguish only by return type
//void g(int a)
//{
//    cout << "G without return";
//}
//
//int g(int a)
//{
//    cout << "G with return";
//    return a;
//}

void h(float a)
{
    cout << "H with float";
}

void h(double a)
{
    cout << "H with double";
}

int main()
{
    // f(); // Cannot resolve function overload
    
    int num = 4;
    // h(num); // Cannot resolve function overload
}