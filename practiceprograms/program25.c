#include <stdio.h>

int countBits(unsigned int n) {
    int c = 0;
    while (n) { n &= (n - 1); c++; }   // har baar lowest set bit hat jata hai
    return c;
}

int main() {
    unsigned int n = 29;
    printf("Set bits: %d\n", countBits(n));
    printf("Power of 2? %s\n", (n && !(n & (n - 1))) ? "Yes" : "No");
    return 0;
}
