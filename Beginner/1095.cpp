//1095 - Sequence IJ 1
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
	int a=1,b=60;
	for(b=60,a=1;b>=0;b=b-5,a=a+3){
		printf("I=%d J=%d\n",a,b);
	}

}
