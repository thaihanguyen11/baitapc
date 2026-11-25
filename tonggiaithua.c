#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    unsigned long long gt = 1;
    unsigned long long tong = 0;

    for (int i = 1; i <= n; i++) {
        gt *= i;
        tong += gt;
    }

    printf("%llu\n", tong);
    return 0;
}
