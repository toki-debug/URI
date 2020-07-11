//1074 - Even or Odd
//Arissa Yoshida

#include <stdio.h>
#include <stdlib.h>


int main () {
	int x,a,b;
	scanf("%d",&x);
	for(a=1;a<=x;a++){
		
		scanf("%d",&b);
		if(b%2==0 && b!=0){
			printf("EVEN ");
		}else if(b%2!=0 && b!=0){
			printf("ODD ");
		}

		if(b>0){
			printf("POSITIVE\n");
		}else if(b<0){
			printf("NEGATIVE\n");
		}else if(b==0){
			printf("NULL\n");
		}
	
	}

	
}
