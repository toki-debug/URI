//1165 - Prime Number
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	int x=0,a,b,y,z=0,c=0,sum=0,d;
	scanf("%d",&x);
	for(a=1;a<=x;a++){
		scanf("%d",&b);
		sum=0;
		for(z=1;z<b;z++){
			if(b%z==0){
				sum+= z;
				
			}
		}

		if(sum==1){
		printf("%d eh primo\n",b);
	}else{
		printf("%d nao eh primo\n",b);
	}
	}
}
