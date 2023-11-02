// n^k
unsigned int myPow(unsigned int n, unsigned int k) {
	unsigned result = 1;
	for (int i = 0; i < k; i++) {
		result *= n;
    }

	return result;
}
