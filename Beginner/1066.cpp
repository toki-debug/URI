//1066 - Even, Odd, Positive and Negative
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main () {
	int x[7]={0},s=0;
	int y,z=0,a=0,b=0,c=0;
	for(y=0;y<=4;y++){
	scanf("%d",&x[y]);
	}
	for(y=0;y<=4;y++){
	if(x[y]%2==0){
		z++;
	}else{
		a++;
	}
	if(x[y]>0){
		b++;
	}else if(x[y]<0){
		c++;
	}
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n\
%d valor(es) negativo(s)\n",z,a,b,c);
}
