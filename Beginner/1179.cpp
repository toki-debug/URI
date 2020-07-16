//1179 - Array Fill IV
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	int t=0,x[100],par[5],impar[5];
	int a,b=0,c=0,k=0;
	for(a=0;a<15;a++){
	scanf("%d",&x[a]);
	if(x[a]%2==0){
		par[b]=x[a];
		b++;
		if(b==5){
			for(k=0;k<5;k++){
			printf("par[%d] = %d\n",k,par[k]);
			par[k]=0;
		}
		b=0;
		}			
	}else{
		impar[c]=x[a];
		c++;
		if(c==5){
			for(k=0;k<5;k++){
			printf("impar[%d] = %d\n",k,impar[k]);
			impar[k]=0;
		}
		c=0;			
		}
		}
	}
	
	for(k=0;k<c;k++){
			printf("impar[%d] = %d\n",k,impar[k]);
		
		}
	for(k=0;k<b;k++){
			printf("par[%d] = %d\n",k,par[k]);
			
		}
	
			
}
