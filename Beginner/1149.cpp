//1149 - Summing Consecutive Integers
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	int a,b,x,z=0;
	scanf("%d",&a);
	
	do{
	scanf("%d",&b);
	}while(b<=0);
	for(x=0;x<b;x++){
		z=z+(a+x);
	}
	printf("%d\n",z);
}
