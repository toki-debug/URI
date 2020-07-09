//1043 - Triangle
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	double a,c,b,p,area;
	scanf("%lf %lf %lf", &a, &b, &c);
	if((a<(b+c))&& (b<(a+c)) && (c<(a+b))){
		p = a+b+c;
			printf("Perimetro = %.1lf\n",p);

	}else{
		area = ((a+b)*c)/2.0;
			printf("Area = %.1lf\n",area);

	}
 	
	
}












