unsigned int log(unsigned int n, unsigned int k) {
	unsigned int powerOfK = 1;
	unsigned int count = 0;

	while (powerOfK <= n) {
		powerOfK *= k;
		count++;
	}

	return count - 1;
}