//1096 - Sequence IJ 2
//Arissa Yoshida

#include <stdio.h>
#include <stdlib.h>



int main () {
	int a=1,b=7;
	do{
		do{
		printf("I=%d J=%d\n",a,b);
		b--;
		}while(b>=5);
		b=7;

		a+=2;
	}while(a<=9);
	

}
