//1145 - Logical Sequence 2
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main () {
	int a,b,x,y=0;
	scanf("%d %d",&a,&b);
	for(x=1;x<=b;x++){
		
		if(x%a==0){
			printf("%d\n",x);		
		}else{
			printf("%d ",x);
		}
	}

	

}

