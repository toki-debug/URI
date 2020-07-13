//1118 - Several Scores with Validation
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	double a,b=0,m,d=0;
	int r=1;
	do{
	int c=0;
	b=0;
	d=0;
	a=0;
	while(c<2){
	scanf("%lf",&a);
	if(a<0||a>10){
		
		printf("nota invalida\n");
	}else{	
		c++;
	b = b+a;
	}
	}
	m=b/2;
	printf("media = %.2lf\n",m);
	
	do{
	printf("novo calculo (1-sim 2-nao)\n");
	scanf("%d",&r);
	}while(r!=1&&r!=2);

	}while(r==1);
}
