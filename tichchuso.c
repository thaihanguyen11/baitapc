#include <stdio.h>
#include <math.h>
 
 int main (){
 	int n;
 	scanf("%d", &n);
 	int tichchuso = 1;
 	while ( n > 0 ) {
 		tichchuso = tichchuso * ( n % 10) ; 
		n /= 10;
 		
	 }
	 printf("%d", tichchuso);
 }
