//1113 - Ascending and Descending
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main () {
	int  m=0,n=0,a=0,c=0,soma=0;
	while(1){
		scanf("%d %d",&m,&n);
		if(m==n){
			break;
		}
		if(n<m){
		 printf("Decrescente\n");
		}else{
			printf("Crescente\n");
		}		
	}
}
