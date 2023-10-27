unsigned int reverseNumber(unsigned int number) {
	unsigned int reversed = 0;

	while (number != 0) {
        (reversed *= 10) += number % 10;
		number /= 10;
	}

	return reversed;
}