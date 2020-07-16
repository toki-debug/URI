//1176 - Fibonacci Array
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	long long int a,b=0,c=1,d=0;
	int t,n;
	long long int x[60]={0};
	for(a=0;a<=60;a++){
		x[a] =b ;
		d = b + c;
		b = c;
		c=d;
	}
	scanf("%d",&t);
	for(a=0;a<t;a++){
		scanf("%d",&n);		
	printf("Fib(%d) = %lld\n",n,x[n]);	
	}		
}
