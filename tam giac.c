#include <stdio.h>
#include <math.h>

int main() {
    int xA, yA, xB, yB, xC, yC;
    scanf("%d %d %d %d %d %d", &xA, &yA, &xB, &yB, &xC, &yC);

    float a = (float) sqrt((xB - xA) * (xB - xA) + (yB - yA) * (yB - yA));
    float b = (float) sqrt((xC - xB) * (xC - xB) + (yC - yB) * (yC - yB));
    float c = (float) sqrt((xC - xA) * (xC - xA) + (yC - yA) * (yC - yA));

    printf("canh a: %.2f\n canh b: %.2f\n canh c: %.2f\n", a, b, c);

    if (a + b > c && a + c > b && b + c > a) {
        double chu_vi = a + b + c;
        double dien_tich = 0.25 * sqrt((a + b + c) * (a + b - c) * (b + c - a) * (a + c - b));
        printf("chu vi: %.2lf\ndien tich: %.2lf\n", chu_vi, dien_tich);
    } else {
        printf("khong tao thanh tam giac\n");
    }

    return 0;
}
