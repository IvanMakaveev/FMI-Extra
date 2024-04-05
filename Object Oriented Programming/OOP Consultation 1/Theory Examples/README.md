## Примерни теоретични задачи

**Темите, които се включват към теорията на контролно 1, са от #1 до #6 включително. Прегледайте си внимателно целия материал от лекции и семинари!**

**Задача 1.** Какво ще изведат sizeof и alignof на следната структура:
```c++
struct Test
{
	char ch;
	int num1;
	char arr[3];
	double num2;
};
```

**Задача 2.** Какво ще се принтира на конзолата след изпълнение на кода. Имаме принтиране в default конструктора, деструктора, copy конструктора и оператор равно (в края):
```c++
struct A {
    // Definition of A
};

struct B {
    // Definition of B
};

struct C {
	A a;
	B b;
    // Definition of C
};

void main()
{
	C c2, c3;
    C c1 = c2;
	c2 = c3;
}
```

**Задача 3.** Кои функции ще се компилират и кои - не.
```c++
struct A
{
    int number;
    char arr[5];
    char* ptr;

    int f1() const {
        return number;
    }

    char* f2() {
        return arr;
    }

    const char* f3() {
        return arr;
    }

    char* f4() const {
        return arr;
    }

    const char* f5() const {
        return arr;
    }

    char* f6() const {
        return ptr;
    }

    const char* f7() const {
        return ptr;
    }

    int* f8() const {
        return &number;
    }

    const int* f9() const {
        return &number;
    }
}
```

**Задача 4.** Какво ще изведе следният код?
```c++
namespace A1
{
    int a = 6;
}

namespace A2
{
    int a = 7;
}

using namespace A1;
using namespace A2;

int main()
{
    std::cout << a;

    int a = 5;

    std::cout << a;
    return 0;
}
```

**Задача 5.** Какъв ще бъде резултата след изпълнение на кода? Какво ще стане, ако сменим enum-а на enum class?

```c++
void unscopedEnums() {
	enum Fruit {
		Apple = 0,
		Orange = 1
	};

	enum Vegetable {
		Pumpkin = 0,
		// Orange = 0 // will not compile
	};

	Fruit f = Apple;
	Vegetable v = Pumpkin;

	if (f == v) {
		std::cout << "test1";
	}

	if (f == Pumpkin) {
		std::cout << "test2";
	}
}
```