//1178 - Array Fill III
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	double t=0,x[100];
	int a=0;
	scanf("%lf",&x[0]);
	for(a=0;a<100;a++){
		if(a==0){
			x[a] = x[a];
		}else{
			x[a] = x[a-1]/2;
		}
		
		printf("N[%d] = %.4lf\n",a,x[a]);
	}	
}
