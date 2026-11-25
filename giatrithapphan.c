#include <stdio.h>
void solve (){
	int n;
	scanf("%d", &n);
	printf("%.15f\n",(double)1.0/n);
}
int main (){
	int t;
	scanf("%d", &t);
	while (t--){
		solve();
	}
	return 0;
}
