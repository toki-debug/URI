//1051 - Taxes
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	double x,r=0,f,d,e,h;
	scanf("%lf",&x);
	d=x;
	h=x;
	if(x>2000.00 && x<=3000.00){
		x = x - 2000.00;
		r=0.08*x;
		
	}else if(x>3000.00 && x<=4500.00){
		f = x - 3000.00;
	
		r = r+(0.18*f);	
		x = (x -2000.00) -f;
	
		r= r+(0.08*x);
	
		 
	}else{
		e = d - 4500.000;
		r = r + (0.28*e);
		f = (x - 3000.00) - e;
		r = r+(0.18*f);
		x = (x -2000.00)-(f+e);
		r= r+(0.08*x);
	}
	if(d>=0 && d<=2000.00){
	printf("Isento\n");			
}else{
		printf("R$ %.2lf\n",r);

}
 	
	
}












