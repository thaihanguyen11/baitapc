#include <stdio.h>
#include <math.h>

int main (){
	int n;
	scanf ("%d", &n);
	int sodau = n;
	int socuoi = n % 10;
	n /= 10;
	int sochuso = 0;
	int a = n;
	while ( a >= 10) {
		sochuso += 1;
		a /= 10;		
	}
	 int soogiua = n % (int)pow(10, sochuso);
	while ( sodau >= 10){
		sodau /= 10;
	}
	if (socuoi == 0){
		printf("%d%d",soogiua,sodau);
	}
	else {
		printf("%d%d%d",socuoi,soogiua,sodau);
	}
	return 0;
}
