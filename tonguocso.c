#include <stdio.h>
#include <math.h>

int main (){
	long long t;
	scanf("%lld", &t );
	long long tong = 0;
	while (t--){
		long long n;
		scanf ("%lld", &n);
		for ( long long i = 2 ; i * i <= n ; i ++ ) {
			while (n % i == 0) {
				tong += i;
				n /= i;
			}
		}
		if ( n > 1 ) {
			tong += n;
		}
		
	}
	printf("%lld", tong);
	return 0;
}
