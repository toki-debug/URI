//1061 - Event Time
//Arissa Yoshida

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	// Dia h:m:s a b:c:d  e f:g:h
	int a,b,c,d,e,f,g,h,dia,hor,min,seg;
	scanf("Dia %d %d : %d : %d Dia %d %d : %d : %d",&a,&b,&c,&d,&e,&f,&g,&h);
		seg = h-d;
		min = g-c;
		hor = f-b;
		dia = e-a;
	
	if(seg<0){
		min--;
		seg+=60;		
	}
	if(min<0){
		hor--;
		min+=60;
	}
	if(hor<0){
		dia--;
		hor+=24;
	}
	
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",dia,hor,min,seg);
}
