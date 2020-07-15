//1156 - S Sequence II
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	double a,b=2.0,d=0.0;
	double x=0.00;
	for(a=3.00;a<=39.00;a+=2.0){
		x = x +(a/(b));
		b*=2.0;
	}
	x = x+1;
	printf("%.2lf\n",x);
	return 0;
}
