## Функции - допълнение

### Function overloading
Една функция може да има безброй много overloads. <br />
При извикване на функцията, компилаторът се грижи да намери правилния overload на функцията. <br />
Компилаторът може да направи преобразуване на данните, ако се налага. <br />
Ако не намери подходящ, се получава грешка при компилиране. <br />
Ако намери повече от 1 подходящ, се получава грешка за двусмислие. <br />

```c++
    void cout(char a) { std::cout << a; } //1

    void cout(int a) { std::cout << a; } //2

    void cout(char a, int b) { std::cout << a << '-' << b; } //3

    void cout(double a, char b) { std::cout << b << '-' << a; } //4

    void cout(bool a) { std::cout << a; } //5

    void cout(char a, bool b, int c) { std::cout << a <<b << c; } //6

    void cout(const int a) { std::cout << a; } //7

    void cout(char a, unsigned b) { std::cout << a << '-' <<b; } //8

    void cout(char a, int b) { std::cout << a << '-' << b; } // 8.1

    char cout(char a) { return a; } //9
```

```c++
    void cout(char a) { std::cout << a; } //двусмислие с 9

    void cout(int a) { std::cout << a; } // двусмислие със 7

    void cout(const int a) { std::cout << a; } // двусмислие с 2

    char cout(char a) { return a; } // двусмислие с 1
```

**Важно!** <br />
За компилатора има значение подредбата на параметрите. Ако спрямо дадената подредба няма отговаряща функция се получава грешка при компилация.

### Параметри по подразбиране
Възможно е да имате програма, в която 90% от случаите подавате eдин и същ параметър на дадено място. <br />
C++ позволява да имате стойност по подразбиране за 1 или повече параметри, които не се налага да уточнявате при извикване на функцията. <br />

```c++
#include <iostream>

void print(int a, int b = 5) {
    std::cout << a << " " << b;
}

int main() {
    print(4); // 4 5
    print(3, 6); // 3 6
}
```

**Параметрите по подразбиране трябва винаги да са в края!!!**
```c++
#include <iostream>

void print(int a, int b = 5, char c = 't') {
    std::cout << a << " " << b << " " << c;
}

int main() {
    print(4); // 4 5 t
    print(3,6); // 3 6 t
    print(3, '0'); // 3 48 t
}

//‘0’ има стойност 48 в ASCII => компилаторът го разглежда като int със стойност 48
```

**Параметрите по подразбиране винаги са в последователността, в която са дефинирани, не могат да се прескачат**

### Function Declaration vs Definition
Declaration – казва на компилатора, че така функция съществува. <br />
Definition – казва на компилатора, какво всъщност прави тази функция(нейната функционалност). <br />
Една функция **може да бъде декларирана**, но да **не бъде дефинирана**. Получаваме компилационна грешка, ако тази функция бъде извикана. <br />

```c++
#include <iostream>

void helloWorld(); //Declaration

int main()  {
    helloWorld();
}

void helloWorld() { // Definition
    std::cout << "Hello World!\n";
}
```

### Стекова рамка
TODO:

### Параметри по референция
Алтернативно име на съществуваща променлива. Променливата може да бъде декларирана като референция чрез **&**. <br />
Ако функция получи рефенция към променлива, тя може да променя(modify) стойността на променливата(директно). <br />
По този начин предотвратява копирането на данни. <br />

```c++
int main() {
    int a = 5;
    int& b = a;
    b++;
    std::cout << a << std::endl; // 6
    std::cout << b << std::endl; // 6
}
```

```c++
void swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}
```


### lvalue & rvalue
Всеки израз в C++ е lvalue или rvalue.
- lvalue - това са изрази, които притежават някакъв адрес в паметта, например променливи, функции, връщащи референция към някакъв тип и т.н.
- rvalue - това са изрази, които не са lvalue

```c++
int a;
a = 4;    // = requires a (modifiable) lvalue as it's lhs, which is a
```

lvalue-тата могат и да не са променливи
```c++
int x;

int& getRef() {
	return x;
}

int main() {
	getRef() = 4;  //Okay, getRef() is an lvalue - returns a reference to the global variable x
	return 0;
}
```
Тук getRef() връща референция към глобалната променлива x, която има адрес в паметта и е lvalue, т.е. всичко е наред. <br />
Колкото при rvalue-тата:

```c++
4 = var;        //Error
(var + 1) = 4;  //Error
```

В случая нито 4, нито (var + 1) са lvalue, а оттам хвърчи и грешката.
```c++
int x;

int getRef() {
	return x;
}

int main() {
	getRef() = 4;  //Error
}
```
Тук getRef() вече е rvalue - вместо да се връща референция към обекта x, се връща някакво негово локално копие.


### Малък проект

Направете демо игра - Бикове и крави
