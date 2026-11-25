#include <stdio.h>
#include <math.h>

int main (){
	int t;
	scanf("%d", &t);
	while ( t--) {
	
		int n;
		scanf("%d",&n);

		int socuoi = n%10;
		while (n>=10) {
			n /= 10;
		}
			if (n == socuoi) {
	printf("YES\n");}
	else {
		printf("NO\n");
	}
}
	return 0;
}
