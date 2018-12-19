#include <iostream>

unsigned long long comb(unsigned int b, unsigned int c) {
    unsigned int a = b - c;
    if (c > a) {
        c = a;
    }
    if (!c) {
        return 1;
    }
    a = b - c + 1;
    unsigned long long result = a;
    a++;
    for (unsigned int i = 2; i <= c; ++i, ++a) {
        result = result / i * a + result % i * a / i;
    }
    return result;
}

int main() {
    std::cout << comb(20, 15) << std::endl;
    return 0;
}
