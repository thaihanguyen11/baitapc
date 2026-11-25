#include <stdio.h>
#include <math.h>

int main (){
	int t;
	scanf("%d", &t);
	int ucln;
	while (t--){
		int a,b;
		scanf("%d %d", &a, &b);
		int i;
		for ( i = 1; i <= a && i <= b  ; i++ ) {
			if (a % i == 0 && b % i == 0) {
			ucln = i; }
		}
			printf("%d\n", ucln);
		
	}
	return 0;
}
