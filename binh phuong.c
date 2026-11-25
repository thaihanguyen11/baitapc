#include <stdio.h>
void solve () {
	long long n;
	scanf("%lld", &n);
	printf("%lld\n", n*n);
}
int main (){
	int t;
	scanf("%d", &t);
	while (t--) {
		solve ();
	}
	return 0 ;
}
