bool checkBitValue(unsigned number, unsigned index) {
    unsigned int mask = 1;
	// 0000100000
    mask <<= index;

	// with equal to mask => the number is one => true
	// else it was zero
	// 0000100000
	// 1110100001
	// &
	// 0000100000
    return (mask & number) == mask;
}

unsigned setBitZero(unsigned int number, unsigned int index) {
    unsigned int mask = 1;
	// 0000100000
    mask <<= index;
	// 1111011111
    mask = ~mask; // everywhere one apart from the index where you want to set 0

	// 0000100010
	// 1111011111
	// &
	// 0000000010
    return number & mask;
}

unsigned setBitToOne(unsigned number, unsigned index) {
    unsigned int mask = 1;
	// 0000100000
    mask <<= index; // everywhere zero apart from the index where you want to set 1
    
	// 0000100000
	// 1110000111
	// |
	// 1110100111
    return number | mask;
}

unsigned setBitValue(unsigned number, unsigned index, bool value) {
	return value 
		? setBitToOne(number, index) 
		: setBitZero(number, index);
}

unsigned toggleBit(unsigned number, unsigned index) {
	unsigned int mask = 1;
	// 0000100000
	mask <<= index; // everywhere zero apart from the index where you want to toggle
	
	// 0000100000
	// 1110000111
	// ^
	// 1110100111
	// if it was zero => 0 ^ 1 => 1
	// if it was one => 1 ^ 1 => 0
	return number ^ mask;
}