//1173 - Array fill I
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	int x[11]={1},a,b,y,z=0,c=0,sum=0,d;
		scanf("%d",&x[0]);
	for(a=0;a<10;a++){
		if(a==0){
			b = x[0];	
			x[a+1] = b;
		}else{

		b = 2 * x [a];
		x[a+1] = b;
		}
		printf("N[%d] = %d\n",a,b);
		}

		
}
