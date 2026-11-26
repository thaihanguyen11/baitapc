#include <stdio.h>
#include <math.h>

long long n (long long a, long long b) {
    while ( b != 0 ) {
        long long sodu = a % b;
        a = b;
        b = sodu; 
    }
    return a;
}

int main (){
    long long a,b;
    scanf("%lld %lld", &a, &b);

    long long ucln = n(a,b);
    long long bcnn = (a*b)/ ucln;

    printf("%lld\n%lld",ucln, bcnn);
    return 0;
}