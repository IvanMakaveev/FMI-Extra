#include <iostream>
using namespace std;

// Vegas Function
void doMagic(int number) 
{
	number++;
}

void doMagicForReal(int& number)
{
	number++;
}

int main()
{
	int number = 0;
	doMagic(number);
	cout << number << endl; // Nothing has changed

	doMagicForReal(number);
	cout << number << endl; // Number has increased

	int& sameNumber = number;
	sameNumber--;
	cout << number << endl; // SameNumber and Number share the same memory
}