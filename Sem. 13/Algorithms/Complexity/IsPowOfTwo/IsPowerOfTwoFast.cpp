bool isPowerOfTwoFast(size_t number) {
    if(number == 0) {
        return false;
    }
    
    return (number & (number - 1)) == 0;
}