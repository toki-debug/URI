//1142 - PUM
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main () {
	int n,a,b;
	scanf("%d",&n);
	for(a=1;a<=(n*4);a++){
		if(a%4==0){
			printf("PUM\n");
		}else{
			printf("%d ",a);	
		}
		
	}

}
