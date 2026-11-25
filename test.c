#include <stdio.h>
#include <math.h>

 int main (){
 	int t;
 	scanf("%d", &t);
 	while ( t--){
 		long long n;
	scanf("%lld", &n);
	
	long long solonnhat = n%10;
	long long sobenhat = n%10;
	
	while (n > 0){
		
		
	if (n%10 <= solonnhat) {
	solonnhat = solonnhat ;
}
	else if (n%10 > solonnhat) {
		solonnhat = n % 10;
	}
	
	if (n%10 >= sobenhat) {
	sobenhat = sobenhat ;
}
	else if (n%10 < sobenhat) {
		sobenhat = n % 10;
	}
	n /= 10;
}
	printf("%lld %lld\n", solonnhat, sobenhat);
	 }
 	return 0;
 }
	

 


