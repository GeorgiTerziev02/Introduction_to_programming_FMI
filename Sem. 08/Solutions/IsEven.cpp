bool isEven(int number) {
	int mask = 1;
    // check if the last bit is a 1 to see if it is odd
    // !isOdd => isEven
	return !(number & mask);
}