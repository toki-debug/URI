//1067 - Odd Numbers
//Arissa Yoshida

#include <stdio.h>
#include <stdlib.h>


int main () {
	int x,y,z=1;
	scanf("%d",&x);
	if(x%2==1){
		x+=1;
	}
	x = x/2;
	for(y=1;y<=(x);y++){
		printf("%d\n",z);
		z+=2;
	}	
}
