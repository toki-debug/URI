//1075 - Remaining 2
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main () {
	int x,a=1;
	scanf("%d",&x);
	do{	
		if(a%x==2){
			printf("%d\n",a);
		}
		a++; 
	}while(a<10000);

	
}
