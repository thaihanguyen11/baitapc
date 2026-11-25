#include <stdio.h>
#include <math.h>

int main (){
	double a, b ,c ; 
	scanf("%lf %lf %lf", &a,&b,&c);
	double denta = (pow(b, 2))-4*a*c;
if (denta > 0) {
        double x1 = (-b + sqrt(denta)) / (2 * a);
        double x2 = (-b - sqrt(denta)) / (2 * a);
        if (x1 > x2) {
            printf("%.2lf %.2lf\n", x1, x2);
        } else {
            printf("%.2lf %.2lf\n", x2, x1);
        }
    }
	else if (denta==0){
		printf("%.2lf",-b/2*a);
	}
	else {
		printf("NO") ;
	}
return 0;
}
