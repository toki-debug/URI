//1046 - Game Time
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int a,c,e=0,f=0;
	scanf("%d %d", &a,&c);
		f = c-a;

	if(f<0){
		f = f+24;
	}
	
	

	
	if(c==a){
		f=24;
	}
	
	printf("O JOGO DUROU %d HORA(S)\n", f);

}
