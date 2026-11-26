#include <stdio.h>
#include <math.h>

int main (){
    int n;
    int k;
    scanf("%d %d", &n, &k);
    int tongso2=0;
    int z;
    for ( int i = 1; i <= n; i++){
        if (i % 2 ==0){
            z = i;
         while ( z % 2 == 0 ) {
            tongso2 ++;
            z /= 2;
            }
        }
    }
if (tongso2 >= k){
    printf("Yes");
}
else {
    printf("No");
}
return 0;
}