#include <stdio.h>

int snt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    int p, q;

    while (1) {
        scanf("%d %d", &p, &q);
        if (p < 0) p = -p;
        if (q < 0) q = -q;
     if (snt(p) == 1 && snt(q) == 1) {
            break;
        }
    }

    int n = p * q;
    int f = (p - 1) * (q - 1);
    printf("%d\n%d\n", n, f);
    return 0;
}