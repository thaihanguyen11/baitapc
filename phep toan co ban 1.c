#include<stdio.h>
int main (){
	long long a;
	long long b;
	scanf("%lld %lld", &a, &b);
	if (b==0){
		printf("0");
	}
	else {
	
	printf("%lld ", a+b );
	printf("%lld ",a-b);
	printf("%lld ", a*b);
	printf("%.2f ",(double)a/b);
	printf("%lld ", a%b);
	}
	return 0;
}
