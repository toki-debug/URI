//1071 - Sum of Consecutive Odd Numbers I
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main () {
	int x,y,z=0,a,b=0,c,d=0,e[100];
	scanf("%d %d",&x,&y);
	if(y>x){
		c=y;
		y=x;
		x=c;	
	}

	if(y%2==0){
		y--;
	}
	if(x%2==0){
		x++;
	}
	for(a=y+2;a<=x-2;a+=2){
		d = d + a;
		
	}
	

	printf("%d\n",d);	

}
