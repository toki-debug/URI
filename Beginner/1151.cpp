//1151 - Easy Fibonacci
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	int a,b=0,x,c=1,d=0,vet[1000]={0};
	scanf("%d",&x);
	for(a=1;a<x;a++){
	printf("%d ",b);
	d = b + c;
	b=c;
	c=d;
	}
	printf("%d\n",b);

}
