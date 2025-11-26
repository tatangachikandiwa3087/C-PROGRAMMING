#include <stdio.h>

int main() {
    int a;
    float b;
    double c;
    long long d;

    printf("%lu %lu %lu %lu\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
    return 0;
}

