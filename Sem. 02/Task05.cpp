#include <iostream>

int main() {
	int hours, minutes;
	std::cin >> hours >> minutes;

	minutes += 15;

	if (minutes >= 60) {
		minutes -= 60;
		hours++;
	}
	
	if (hours >= 24) {
		hours -= 24;
	}

	std::cout << 
		(hours < 10 ? "0" : "") <<  hours << ":" <<
		(minutes < 10 ? "0" : "") << minutes << std::endl;

    // Equal to:
	// if (hours < 10) {
	// 	std::cout << "0";
	// }
	// std::cout << hours << ":";

	// if (minutes < 10) {
	// 	std::cout << "0";
	// }
	// std::cout << minutes;
}