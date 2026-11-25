#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (){
	int xa,ya,xb,yb ;
	int xc,yc,xd,yd ;
	scanf ("%d %d %d %d", &xa, &ya , & xb, & yb);
	scanf ("%d %d %d %d", &xc, &yc , & xd, & yd);
	int a,b,c,d,e,f,g,h ;
	a = abs (xa-xd);
	b = abs (yb-yc);
	c = abs (ya-yd);
	d = abs (xb-xc);
	e = abs (xa-xb);
	f = abs (ya-yb);
	g = abs (xc-xd);
	h = abs (yc-yd);
	int max = a;
if (b > max) max = b;
if (c > max) max = c;
if (d > max) max = d;
if (e > max) max = e;
if (f > max) max = f;
if (g > max) max = g;
if (h > max) max = h;

printf("%d\n", max*max);
	return 0;
}
