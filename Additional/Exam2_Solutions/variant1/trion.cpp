#include <iostream>

const int MIN_LENGTH = 3;
const int MAX_LENGTH = 16;

bool isValidLength(int length) {
    return length >= MIN_LENGTH && length <= MAX_LENGTH;
}


// v1
bool isTrion(unsigned length) {
    int lastNumber;
    std::cin >> lastNumber;
    bool lastIsBigger = true;
    for (int i = 1; i < length; ++i) {
        int current;
        std::cin >> current;

        if (i == 1) {
            if (current < lastNumber) {
                lastIsBigger = false;
            }
            lastNumber = current;
            continue;
        }

        if (lastNumber == current ||
            lastIsBigger == lastNumber < current) {
            return false;
        }
        lastIsBigger = !lastIsBigger;
        lastNumber = current;
    }

    return true;
}

// v2
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

bool isTrion2(unsigned length) {
    int newNumber, lastNumber;
	std::cin >> newNumber >> lastNumber;
	if (newNumber == lastNumber) {
		return false;
	}

	bool flag = newNumber > lastNumber;
	for (size_t i = 0; i < length - 2; i++) {
		std::cin >> newNumber;
		if (lastNumber == newNumber || flag == (lastNumber > newNumber)) {
            return false;
		}

		flag = !flag;
		swap(newNumber, lastNumber);
	}

    return true;
}

int main() {
    int length;
    std::cin >> length;

    if(isValidLength(length)) {
        std::cout << "Invalid input";
        return 0;
    }
    
    std::cout << isTrion(length);
}