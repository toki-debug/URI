//1042 - Simple Sort
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int a1[4],a2[4],x,y,saf;
	for(x=1;x<=3;x++){
	scanf("%d", &a1[x]);
	a2[x] = a1[x];
	}
	for(x=1;x<=3;x++){
		for(y=3;y>x;y--){
			if(a2[x]>a2[y]){
				saf = a2[x];
				a2[x] = a2[y];
				a2[y] =saf;
			}
		} 		
 	}
 
 	for(x=1;x<=3;x++){
	printf("%d\n", a2[x]);
	}
		printf("\n");	
	for(x=1;x<=3;x++){
	printf("%d\n", a1[x]);
	}
 	
	
}













