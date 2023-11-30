unsigned int powerOfTwo(unsigned int n) {
    // 2^31 is the maximum power of two that can be represented as an unsigned int
    if(n > 31) {
        return 0;
    }
         
    // 1 << n is equivalent to 2^n
    return 1 << n;   
}