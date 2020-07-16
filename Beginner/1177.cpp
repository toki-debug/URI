//1177 - Array Fill II
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	int t,x,a=0;
	scanf("%d",&t);
	for(x=0;x<1000;x++){
		
		if(a==(t)){
			a=0;
		}
		printf("N[%d] = %d\n",x,a);
		a++;
	}	
}
