//1099 - Sum of Consecutive Odd Numbers II
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main () {
	int  n=0,x=0,y=0,a=0,c=0,b=0,d=0;
	scanf("%d",&n);
	for(a=1;a<=n;a++){
		d=0;
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
	for(b=y+2;b<=x-2;b+=2){
		d = d + b;
		
	}

	printf("%d\n",d);	
	}

}
