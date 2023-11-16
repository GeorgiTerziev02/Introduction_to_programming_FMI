#include <iostream>

const unsigned MAX_SIZE = 1001;

// function that sets a particular value to every element in an array
void initArray(bool* arr, unsigned size, bool value) {
	for (unsigned i = 0; i < size; i++) {
		arr[i] = value;
	}
}

// Mark all numbers that are like x*startNumber as false (not prime)
// (where x is less than size)
void markAsNotPrime(bool* arr, unsigned size, unsigned startNumber) {
	// start from the square because all the numbers that are like
	// x*startNumber (where x is less than startNumber)
	// have already been marked by the previous invocations of this array
	// with smaller numbers
	int toMark = startNumber * startNumber;
	while (toMark < size) {
		arr[toMark] = false;
		toMark += startNumber;
	}
}

void calculateEratosthenesSieve(bool* arr, unsigned size) {
	// by default we know that 0 and 1 are not prime
	arr[0] = arr[1] = false;

	// No need to iterate after square of size
	// we will not mark anything after that, look at markAsNotPrime function
	int sqrtOfSize = sqrt(size);

	// Every time you find not marked number, it means it is prime
	// => mark all numbers where i is there multiple
	for (unsigned i = 2; i < sqrtOfSize; i++) {
		if (!arr[i]) { // if the number is marked as non prime skip
			continue;
		}

		markAsNotPrime(arr, size, i);
	}
}

// prints only the numbers that have been left as true
void printSieve(const bool* arr, unsigned size) {
	for (unsigned i = 0; i < size; i++) {
		if (arr[i]) {
			std::cout << i << " ";
		}
	}
}

int main() {
	// array that holds if a number is prime or not
	// the index is equivalent to the number you will check
	// if the number(index) is prime -> sieve[index] will be true else false
	bool sieve[MAX_SIZE];
	int size;
	std::cin >> size;

	// by default we set every number as prime
	initArray(sieve, size, true);
	calculateEratosthenesSieve(sieve, size);
	printSieve(sieve, size);
}
