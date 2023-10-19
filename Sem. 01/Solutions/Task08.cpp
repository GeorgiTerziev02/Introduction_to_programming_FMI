#include <iostream>

int mainV1() {
	int a, b;
	std::cin >> a >> b;

	bool shouldSwap = (a < b) && (a = b);

	std::cout << a;
}

int mainV2() {
	int a, b;
	std::cin >> a >> b;

	bool isFirstBigger = a > b;

	std::cout << isFirstBigger * a + !isFirstBigger * b;
}