//1073 - Even Square
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main () {
	int x,a,b=0,c;
	scanf("%d",&x);
	if(x%2==1){
		x--;
	}
	for(a=2;a<=x;a+=2){
		c = a * a;
		printf("%d^2 = %d\n",a,c);
	}

	
}
