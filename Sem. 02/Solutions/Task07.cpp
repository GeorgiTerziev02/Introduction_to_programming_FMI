#include <iostream>
// v1
int main() {
	int x, y, radius;

	std::cin >> x >> y >> radius;

	if (x * x + y * y < radius * radius) {
		std::cout << "In the circle";
	}
	else if (x * x + y * y == radius * radius) {
		std::cout << "On the circle";
	}
	else {
		std::cout << "Out of the circle";
	}
}

// v2
// const double EPSILON = 0.0001;

// int main() {
//     int x, y;
//     std::cin >> x >> y;
//     double r;
//     std::cin >> r;

//     double length = sqrt((x * x) + (y * y));

//     if (length < r) {
//         std::cout << "Inside" << std::endl;
//     }
//     else if (std::fabs(length - r) < EPSILON) {
//         std::cout << "On the border" << std::endl;
//     }
//     else {
//         std::cout << "Outside" << std::endl;
//     }
// }