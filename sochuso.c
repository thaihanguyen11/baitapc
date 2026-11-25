#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	int sochuso = 0 ;
	while ( n > 0 ){
	n /= 10;
	sochuso += 1;
	}
	printf("%d", sochuso);
	return 0;
}
