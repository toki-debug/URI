//1146 - Growing Sequences
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	int a,b;
	while(1){
		scanf("%d",&a);
		if(a==0){
			break;
		}else{
			for(b=1;b<a;b++){
				printf("%d ",b);
			}
			printf("%d\n",b);
		}
	}
}
