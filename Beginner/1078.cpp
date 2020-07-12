//1078 - Multiplication Table
//Arissa Yoshida

#include <stdio.h>
#include <stdlib.h>


int main () {
	int x,a=1;
	scanf("%d",&x);
	do{
		printf("%d x %d = %d\n",a,x,(a*x));
		a++;
	}while(a<=10);

	
}
