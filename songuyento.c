#include <stdio.h>
#include <math.h>

int main (){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		int prime = 1;
		if (n<2){
			printf("NO\n");
			continue;
		}
		if (n>=2){
			int i;
			for (i = 2; i < n ; i++){
				if ( n % i == 0) {
					prime = 0;
					break;
					
				}
			}
			if (prime == 1){
			printf ("YES\n");}
			else if (prime == 0) {
			printf ("NO\n");}
			}
		  }
		
		
	return 0 ;
}


