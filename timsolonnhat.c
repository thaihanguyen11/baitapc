#include <stdio.h>

int main() {
    unsigned long long x, max = 0;
    while (scanf("%llu", &x) == 1) {
        if (x > max) {
            max = x;
        }
    }
    printf("%llu\n", max);
    return 0;
}