#include <iostream>

const double PI = 3.14;

int main() {
    // s r c t
    char figure;
    std::cin >> figure;

    switch (figure) {
    case 's': {
        int side;
        std::cin >> side;
        std::cout << side * side;
    }; break;
    case 'r': {
        int sideA, sideB;
        std::cin >> sideA >> sideB;
        std::cout << sideA * sideB;
    }; break;
    case 'c': {
        int radius;
        std::cin >> radius;
        std::cout << radius * radius * PI;
    }; break;
    case 't': {
        int sideA, height;
        std::cin >> sideA >> height;
        std::cout << (sideA * height) / 2;
    }; break;
    default:
        std::cout << "Invalid Figure";
        break;
    }
}