//1117 - Score Validation
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	double a,b=0,m,d=0;
	int c=0;
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
	
}
