#include <stdio.h>
#include <math.h>

int main (){
    int t;
    scanf("%d", &t);
    while (t--){
    int n;
    scanf  ("%d", &n);
    int num ;
    for (int i = (int) pow (10, n-1); i < (int) pow (10,n); i ++){
        int ifake = i;
        while ( ifake > 0 ){
            num = ifake % 10;
            if (num >= (ifake / 10) % 10){
                ifake /=10;
            }
            else {
                break;
            }
        }
        if (ifake==0){
            printf("%d ",i);
        }
    }
    printf("\n");
}
return 0;
}