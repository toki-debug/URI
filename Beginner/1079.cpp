//1079 - Weighted Averages
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main () {
	int n,x;
	double a,b,c,r;
	scanf("%d",&n);
	for(x=1;x<=n;x++){
		scanf("%lf %lf %lf",&a,&b,&c);
		a = a*2.0;
		b = b*3.0;
		c = c*5.0;
		r = (a+b+c)/10.0;
	printf("%.1lf\n",r);
	}

	
}
