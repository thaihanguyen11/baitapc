#include <stdio.h>
#include <math.h>

int main (){
		int n;
		scanf ("%d", &n);
		int a = 1;
		for ( int i = 2 ; i <= n ; i ++ ) {
			while (n % i == 0) {
				
				if ( a != 1 ){
					
					printf ("x");}
				printf ("%d", i);
				n /= i;
				a= a + 1;
				 
				}
			
			}
		
			if (n > 1){
		printf("%d", n); }
		   else {
			printf("\n");
		}
	
	return 0;
}
