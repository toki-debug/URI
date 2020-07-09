//1036 - Bhaskara's Formula
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	double a,b,c,x=0.0,y=0.0;
	scanf("%lf %lf %lf", &a,&b,&c);
	x = (b*b) - (4.0*a*c);
	if(x<0.0 || a==0.0){
		//stop
		printf("Impossivel calcular\n");
	}else{
		y = ((-b+(sqrt(x)))/(2.0*a));
		printf("R1 = %.5lf\n",y);
		y = ((-b-(sqrt(x)))/(2.0*a));
		printf("R2 = %.5lf\n",y);
	}

}
