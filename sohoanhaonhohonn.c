#include <stdio.h>

int main() {
    int max;
    scanf("%d", &max);

    for (int n = 2; n < max; n++) {
        int tong = 1;
        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                tong += i;
                if (i * i != n) {
                    tong += n / i;
                }
            }
        }
        if (tong == n) {
            printf("%d ", n);
        }
    }

    return 0;
}