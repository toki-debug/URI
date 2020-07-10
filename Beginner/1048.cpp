//1048 - Salary Increase
//Arissa Yoshida

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	double a,c,b,area;
	int p;
	scanf("%lf", &a);
	if(a>=0.00&& a<=400.00){
		b =	0.15*a;
		c = a +b;
		p=15;
	}else if(a>400.00&& a<=800.00){
		b =	0.12*a;
		c = a +b;
		p=12;
	}else if(a>800.00&& a<=1200.00){
		b =	0.10*a;
		c = a +b;
		p=10;
	}else if(a>1200.00&& a<=2000.00){
		b =	0.07*a;
		c = a +b;
		p=7;
	}else if(a>2000.00){
		b =	0.04*a;
		c = a +b;
		p=4;
	}

	printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n",c,b,p);

	
 	
	
}












