#include <stdio.h>
#include <windows.h>

int main() {
    float x, y, z;
    char c = '*';

    for (x = 1.5; x > -1.5; x -= 0.1) {
        for (y = -1.5; y < 1.5; y += 0.05) {
            z = x * x + y * y - 1;

            if (z * z * z - x * x * y * y * y <= 0.0) {
                printf("%c", c);
            } else {
                printf(" ");
            }
        }

        system("color 0c");
        printf("\n");
    }

    return 0;
}