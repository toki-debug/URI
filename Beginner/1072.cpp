//1072 - Interval 2
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main () {
	int x,y[100000],a,b=0;
	scanf("%d",&x);
	for(a=0;a<x;a++){
		scanf("%d",&y[a]);
		if(y[a]>=10 && y[a]<=20){
			b++;
		}
	}

	printf("%d in\n%d out\n",b,(x-b));
}
