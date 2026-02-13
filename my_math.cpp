long long int power(int a, int b) {
    long long int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}
