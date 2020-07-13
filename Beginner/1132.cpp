//1132 - Multiples of 13
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	int n=0,x,y,a,r=0;
	scanf("%d %d",&x,&y);
	if(x>y){
		n=x;
		x=y;
		y=n;
	}
	for(a=x;a<=y;a++){
	if(a%13!=0){

		r = r+a;
	}	
	
	}
	printf("%d\n",r);

	
}
