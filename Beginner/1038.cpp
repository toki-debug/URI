//1038 - Snack
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int x,y;
	float a=4.00,b=4.50,c=5.00,d=2.00,e=1.50,r;
	scanf("%d %d", &x,&y);
	if(x==1){		
	r = a*y;
	}else if(x==2){
		r=b*y;
	}else if(x==3){
		r=c*y;
	}else if(x==4){
		r=d*y;
	}else if(x==5){
		r=e*y;
	}
	printf("Total: R$ %.2lf\n",r);


}
