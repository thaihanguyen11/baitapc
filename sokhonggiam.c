#include <stdio.h>
#include <math.h>

int main (){
    long long t;
    scanf("%lld", &t);
    while (t--){
        long long n;
        scanf("%lld", &n);
        long long max = n % 10;
        n /= 10;
        while ( n > 0 ){
            if(n%10 <= max){
                max = n % 10;
                n /= 10;
            }
            else{
                break;
            }
      }   
    if (n==0)
    {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    
}
    return 0;
}