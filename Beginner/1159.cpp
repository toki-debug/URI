//1159 - Sum of Consecutive Even Numbers
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	int x=0,a,b,y,z=0,c=0,sum=0,d;
	while(1){
	scanf("%d",&x);
	if(x==0){
		break;
	}else{
	z=0,c=0,sum=0;
	d=x;
	do{
		if(d%2==0){
			sum = sum +d;
			z++;		
		}
		c++;
		d = x + c;	
	}while(z<5);

	printf("%d\n",sum);
	}
}
}
