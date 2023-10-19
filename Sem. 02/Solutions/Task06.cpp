#include <iostream>

int main() {
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

	bool isSaw = (a >= b && b <= c && c >= d && d <= e)
		|| (a <= b && b >= c && c <= d && d >= e);

	std::cout << (isSaw ? "yes" : "no") << std::endl;
}