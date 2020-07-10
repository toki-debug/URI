//1052 - Month
//Arissa Yoshida


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int x;
	char *meses[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	scanf("%d", &x);
	printf("%s\n", meses[x-1]);
	
}


