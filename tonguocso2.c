#include <stdio.h>

#define MAX 2000000

int snt[MAX + 1];

int main() {
    int t; 
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
    
    for (int i = 2; i <= MAX; i++) {
        snt[i] = 1;
    }

    for (long long i = 2; i * i <= MAX; i++) {
        if (snt[i]== 1) {
            for (long long j = i * i; j <= n; j += i) {
                snt[j] = 0;
            }
        }
    }

    int tong = 0;
    for (int i = 2; i <= n ; i++) {
        if (snt[i] == 1) {
            tong++;
        }
    }
      printf("%d\n", tong);
}

    return 0;
}
