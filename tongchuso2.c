#include <stdio.h>
#include <math.h>
int main (){
	long long t;
	scanf("%lld", &t);
	while (t--){
			long long n;
	scanf("%lld", &n);
	
	long long sum = 0;
	while (n > 0){
		sum += n%10;
		n /= 10;
	}
	printf("%lld\n", sum);
}
return 0;
	}





