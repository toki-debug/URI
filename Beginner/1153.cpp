//1153 - Simple Factorial
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	int a,b=1,x,c=1,d=0;
	scanf("%d",&x);
	for(a=1;a<x;a++){
		b = b*(x-a);
	}
	b = b*x;
	printf("%d\n",b);

}
