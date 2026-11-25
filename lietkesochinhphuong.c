#include <stdio.h>
#include <math.h>

int main (){
	int a,b ;
	scanf ("%d %d", &a, &b) ;
	int sosochinhphuong = 0 ;
	for ( int n = ceil(sqrt(a)) ;  n * n <= b ; n++ ){
		if ( n * n <= b) {
			sosochinhphuong += 1; }
		}
		printf("%d\n", sosochinhphuong);
	for ( int i = ceil(sqrt(a)) ;  i * i <= b ; i++ ){
		if ( i * i <= b) {
			printf ("%d\n", i * i);
		}
	}
	return 0 ; 
	
}
