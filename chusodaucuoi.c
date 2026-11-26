#include <stdio.h>
#include <math.h>

int main (){
    int n;
    scanf("%d", &n);
    int socuoi = n % 10;
    while ( n >= 10 ) {
        n /= 10;
    }
printf("%d %d",n ,socuoi);
return 0;
}