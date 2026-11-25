#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    printf("Ma ASCII: %d\n", c);
//em muon thu dung cach thu cong thay vi %B
    printf("Nhi phan: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (c >> i) & 1);
    }
    printf("\n");

    printf("Thap luc phan: %X\n", c);

    return 0;
}