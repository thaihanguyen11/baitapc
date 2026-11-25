#include <stdio.h>
#include <math.h>

int main (){
	long long a,b ;
	scanf("%lld %lld", &a, &b);
	long long tongcacso = 0 ;
	if ( a <= b ){
		for ( long long i = a ; i <= b ; i++ ){
			if (i <= b) {
				tongcacso += i;
			}
		}
		
	}
	if ( b < a ){
		for ( long long i = b ; i <= a ; i++ ){
			if (i <= a) {
				tongcacso += i;
			}
		}
	}
	printf("%lld", tongcacso);
	return 0;
}

