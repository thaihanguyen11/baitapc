#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        int tong = 0;
        for (long long i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                if (i % 2 == 0) {
                    tong++;
                }
                long long d = n / i;
                if (d != i && d % 2 == 0) {
                    tong++;
                }
            }
        }
        printf("%d\n", tong);
    }
    return 0;
}