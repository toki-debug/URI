//1065 - Even Between five Numbers
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main () {
	int x[7]={0},s=0;
	int y,z=0;
	for(y=0;y<=4;y++){
	scanf("%d",&x[y]);
	}
	for(y=0;y<=4;y++){
	if(x[y]%2==0){
		z++;
		s = s + x[y];
	}
	}
	s = s/(z);
	printf("%d valores pares\n",z);
}
