#include <stdio.h>
#include <limits.h>

int main() {
    int x;
    int max_val = 0;       
    int min_val = 99999999; 

    while (scanf("%d", &x) == 1) {
        if (x > max_val) {
            max_val = x;
        }
        if (x < min_val) {
            min_val = x;
        }
    }

    printf("%d %d\n", max_val, min_val);
    return 0;
}
