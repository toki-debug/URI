//1150 - Exceeding Z
//Arissa Yoshida

#include <stdio.h>
#include <stdlib.h>


main(){
	int a,b=1,x,z=0;
	scanf("%d",&x);
	do{
		scanf("%d",&z);
	}while(z<=x);
	a=x;
	do{
		
		a+=x+b;
		b++;	
	}while(a<=z);
	printf("%d\n",b);
}
