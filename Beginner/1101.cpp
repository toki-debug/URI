//1101 - Sequence of Numbers and Sum
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main () {
	int  m=0,n=0,a=0,c=0,soma=0;
	while(1){
		m=0;n=0;
		scanf("%d %d",&m,&n);
		if(m<=0 ||n<=0){
			break;
		}
		if(n>m){
		 c=n;
		 n=m;
		 m=c;
		}
		c= m-n;
		soma=0;
		for(a=0;a<(c+1);a++){
		soma = soma+(n+a);	
		printf("%d ",(n+a));
		}	

		printf("Sum=%d\n",soma);	
	}
}
