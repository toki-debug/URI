//1097 - Sequence IJ 3
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>



int main () {
	int a=1,b=7,x=1;
	do{
		do{
		printf("I=%d J=%d\n",a,b);
		b--;
		x++;
		}while(x<=3);
		b+=5;
		x=1;

		a+=2;
	}while(a<=9);
	

}
