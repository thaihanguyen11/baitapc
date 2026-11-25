#include <stdio.h>
#include <math.h>

int main (){
	int t;
	scanf("%d", &t );
	while (t--){
		long long n;
		scanf ("%lld", &n);
		long long snt = 1;
		for ( long long i = 2 ; i <= n ; i ++ ) {
			if (n % i == 0) {
				  snt = snt * i ; 
			}
			while (n % i == 0) {
				n /= i;
			}
		}
		printf("%lld", snt * n); 
		printf("\n");
	}
	return 0;
}
