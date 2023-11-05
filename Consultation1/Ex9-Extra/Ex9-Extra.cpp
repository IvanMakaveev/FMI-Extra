#include <iostream>
using namespace std;

void f(const int& ref)
{

}

void g(int& ref)
{

}

int main()
{
	for (size_t i = 0; i < 10;)
	{
		i = i++; // Should be an infinite loop
		cout << i << endl;
	}

	const int& reference = 10; // Exntending the lifecycle of a literal;
	f(3);
	// g(3); // Error
}
