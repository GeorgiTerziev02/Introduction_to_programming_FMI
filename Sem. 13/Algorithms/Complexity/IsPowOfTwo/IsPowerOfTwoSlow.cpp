bool isPowerOfTwoSlow(size_t number) {
    
    while (number % 2 == 0) {
        number /= 2;
    }
    
    return number == 1;
}
