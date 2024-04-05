#include <iostream>

// Global memory
int number = 5;

// Code memory
int function()
{
	return 5;
}

void memoryExamples()
{
	int stackNumber = 5; //Stack
	int arrayInStack[5]; //Stack + pointer
	int* heapNumber = new int(5); // Heap + pointer in stack
	int* arrayInHeap = new int[5]; // Heap 5 elements + pointer in stack
}

struct FunctionArgumentTest
{
	int num = 5;
};

void passByCopy(FunctionArgumentTest a)
{
	a.num++;
}

void passByRef(FunctionArgumentTest& a)
{
	a.num++;
}

void passByPtr(FunctionArgumentTest* a)
{
	a->num++;
}

void passByConstRef(const FunctionArgumentTest& a)
{
	//a.num++; // This will not compile
}

void paddingExample()
{
	struct Test
	{
		char ch;
		int num1;
		char arr[3];
		double num2;
	};

    std::cout << sizeof(Test) << std::endl;
    std::cout << alignof(Test) << std::endl;
}

void unscopedEnums() {
	enum Fruit {
		Apple = 0,
		Orange = 0
	};

	enum Vegetable {
		Pumpkin = 0
	};

	Fruit f = Apple;
	Vegetable v = Pumpkin;

	if (f == v) {
		std::cout << "test";
	}

	if (f == Pumpkin) {
		std::cout << "test2";
	}
}

void scopedEnums() {
	enum class Fruit {
		Apple = 0,
		Orange = 0
	};

	enum class Vegetable {
		Pumpkin = 0
	};

	Fruit f = Fruit::Apple;
	Vegetable v = Vegetable::Pumpkin;

	// Cannot directly compare two different enum class values
	//if (f == v) { 
	//	std::cout << "test";
	//}
}

#include <fstream>

size_t getFileSize(std::ifstream& in) {
	// We save the previous sate so we can then return it to the initial position
	size_t prev = in.tellg();

	in.seekg(0, std::ios::end);
	size_t size = in.tellg();

	in.seekg(prev, std::ios::beg);

	return size;
}

// Classes examples
struct A {
	A() {
		std::cout << "A constructor" << std::endl;
	}

	explicit A(int number)
	{
		std::cout << "A conv constructor" << std::endl;
	}


	A(const A& other) {
		std::cout << "A copy-constructor" << std::endl;
	}

	A& operator=(const A& other) {
		std::cout << "A operator=" << std::endl;
		return *this;
	}

	int variable = 6;

	int get()const
	{
		return variable;
	}

	~A() {
		std::cout << "A destructor" << std::endl;
	}
};

struct B {
	B() {
		std::cout << "B constructor" << std::endl;
	}

	B(const B& other) {
		std::cout << "B copy-constructor" << std::endl;
	}

	B& operator=(const B& other) {
		std::cout << "B operator=" << std::endl;
		return *this;
	}

	~B() {
		std::cout << "B destructor" << std::endl;
	}
};

struct C {
	A a;
	B b;

	C() {
		std::cout << "C constructor" << std::endl;
	}

	C(const C& other) : a(other.a), b(other.b) {
		std::cout << "C copy-constructor" << std::endl;
	}

	C& operator=(const C& other) {
		a = other.a;
		b = other.b;
		std::cout << "C operator=" << std::endl;
		return *this;
	}

	~C() {
		std::cout << "C destructor" << std::endl;
	}
};

void classCreationExample()
{
	C c2, c3; // A()B()C() A()B()C()
	C c1 = c2; // COPYA()COPYB()COPYC()
	c2 = c3; // OP=A()OP=B()OP=C()
} // ~C()~B()~A() will be called 3 times

// This function will apply RVO and not make an extra copy
A rvoFunction()
{
	return A(5);
}

// This function will apply NRVO and not make an extra copy
A rvoFunction()
{
	A test(5);
	return test;
}

int main() {

}