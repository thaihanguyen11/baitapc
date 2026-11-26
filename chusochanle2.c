#include <stdio.h>
#include <math.h>

int main (){
    int t;
    scanf ("%d\n", &t);
    while (t--){
    int n;
    scanf ("%d", &n);
    int le = 0 ;
    int chan = 0;
    while ( n > 0) {
        if (n % 2 == 0){
            chan ++;
        }
        else {
            le++;
        }
        n /= 10;
    }
printf ("%d %d\n", le, chan);
    }
return 0;
}