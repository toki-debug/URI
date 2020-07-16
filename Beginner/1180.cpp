//1180 - Lowest Number and Position
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	int t=0,x[1000]={0};
	int a,b=0,c=0,k=0;
	
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		scanf("%d",&x[b]);
		if(b==1){
			x[0]=x[b];

		}else{
			
			if(x[0]<=x[b]){

			}else{
			x[0] = x[b];
			c=b;
			}

	}

	}
	if(c==0){
		c=1;
	}
	printf("Menor valor: %d\nPosicao: %d\n",x[0],(c-1));
	
			
}
