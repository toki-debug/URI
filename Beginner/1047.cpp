//1047 - Game Time with Minutes
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int a,b,c,d,e=0,f=0;
	scanf("%d %d %d %d", &a, &b, &c,&d);
		e = d-b;
		f = c-a;
	if(e<0){
		f--;
		e = e+60;		
	}

	if(f<0){
		f = f+24;
	}
	
	

	
	if(c==a && b==d){
		f=24;
	}
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", f,e);

}
