//1157 - Divisors I
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	int x,a;
	scanf("%d",&x);
	for(a=1;a<=x;a++){
		if(x%a==0){
			printf("%d\n",a);
		}
	}
}
