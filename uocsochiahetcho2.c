#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        int can = (int)sqrt((double)n);
        int tonguoc = 0;

        for (int i = 1; i <= can; i++) {
            if (n % i == 0) {
                if (i % 2 == 0) {
                    tonguoc += 1;
                }
                long long uoc2 = n / i;
                if (uoc2 != i && uoc2 % 2 == 0) {
                    tonguoc += 1;
                }
            }
        }
        printf("%d\n", tonguoc);
    }
    return 0;
}