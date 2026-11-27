#include <stdio.h>
#include <math.h>
int main (){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int min = a;
    if ( b <= a) {
        min = b;
        if ( c<= b){
            min = c;
        }
    }
    if ( b > a){
        if ( c <= a){
            min = c;
        }
    
    }
    printf("%d",min);
    return 0;
}