bool checkBit(unsigned number, unsigned index) {
    unsigned int mask = 1;
	// 0000100000
    mask <<= index;

	// with equal to mask => the number is one => true
	// it was zero
    return (mask & number) == mask;
}

unsigned setBitZero(unsigned int number, unsigned int index) {
    unsigned int mask = 1;
	// 0000100000
    mask <<= index;
	// 1111011111
    mask = ~mask;

	// 0000100010
	// 1111011111
	// &
	// 0000000010
    return number & mask;
}

unsigned makeBitOne(unsigned number, unsigned index) {
    unsigned int mask = 1;
	// 0000100000
    mask <<= index;
    
	// 0000100000
	// 1110000111
	// |
	// 1110100111
    return number | mask;
}