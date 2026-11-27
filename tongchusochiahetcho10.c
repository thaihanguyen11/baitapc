#include <stdio.h>
#include <math.h>

int tongchuso(int n){
    int tong = 0;
    while (n > 0){
        tong += n % 10;
        n /= 10;
    }
    return tong;
}
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
    int n;
    scanf("%d", &n);
    int tong = tongchuso(n);
    if (tong % 10 == 0){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}   
    return 0;
}