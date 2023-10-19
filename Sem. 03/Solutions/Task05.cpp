#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    int i = a < b ? b : a;

    while (i % a != 0 || i % b != 0){
        i++;
    }

    std::cout << i;
}