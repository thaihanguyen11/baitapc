#include <stdio.h>
#include <math.h>

int main () {
    int n;
    scanf("%d", &n);
    int a = n;
    int tong = 0;
    
    while ( a > 0 ){
        int gt = 1;
        for ( int i = 2 ; i <= a % 10 ; i++ ) {
             gt *= i ;
        }
             tong += gt;
             a /= 10;
            
        }
    
    if (tong == n) {
        printf("1");
    }
    else {
        printf("0");
    }
    return 0 ; 
}