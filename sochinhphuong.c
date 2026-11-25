#include<stdio.h>
#include<math.h>

int main (){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
	scanf("%d",&n);
	double can_n = sqrt(n);
	int can_n_lam_tron = can_n;
	int n_sau_nhan = can_n_lam_tron * can_n_lam_tron;
	if (n_sau_nhan == n){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}
	return 0;
}



