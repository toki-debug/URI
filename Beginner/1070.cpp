//1070 - Six Odd Numbers
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main () {
	int x,y,z=0;
	scanf("%d",&x);
	if(x%2==0){
		x+=1;
	}
	for(y=1;y<=6;y++){
		printf("%d\n",x);
		x+=2;
	}	
}
