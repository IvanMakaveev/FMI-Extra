#include <iostream>
using namespace std;
int globalVar = 10;

int getCopy()
{
    int copy = 0;
    return copy;
}

// NEVER DO THIS!
int& getReferenceFromInside()
{
    int myVariable = 5;
    return myVariable;
}

int& getGlobal()
{
    return globalVar;
}

int& getFromParameters(int& myRef)
{
    return myRef;
}

int getFromParametersCopy(int& myRef)
{
    return myRef;
}

int main()
{
    int number = 10;

    cout << getCopy() << endl;
    cout << getGlobal() << endl;
    cout << getFromParameters(number) << endl;
    cout << getFromParametersCopy(number) << endl;

    getFromParameters(number)++;
    // getFromParametersCopy(number)++; // ERROR


    int& myRef = getReferenceFromInside();
    printf("Value returned is "); // Calling this to affect the stack
    cout << myRef << endl; // UNDEFINED BEHAVIOUR
}
