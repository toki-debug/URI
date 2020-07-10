//1045 - Triangle Types
//Arissa Yoshida

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){

	double a2[4]= {},a,b,c;
	int x,y,saf;
 	for(x=1;x<=3;x++){
		scanf("%lf",&a2[x]); 		
 	}
 	for(x=1;x<=3;x++){
		for(y=3;y>x;y--){
			if(a2[x]<a2[y]){
				saf = a2[x];
				a2[x] = a2[y];
				a2[y] =saf;
			}
		} 		
 	}
 	a = a2[1];
 	b = a2[2];
 	c = a2[3];
 	if(a>=(b+c)){
 		printf("NAO FORMA TRIANGULO\n");
 	}else{
 		if((a*a)==((b*b)+(c*c))){
 		printf("TRIANGULO RETANGULO\n");	
 		}
 		else if((a*a)>((b*b)+(c*c))){
 		printf("TRIANGULO OBTUSANGULO\n");	
 		}
 		else if((a*a)<((b*b)+(c*c))){
 		printf("TRIANGULO ACUTANGULO\n");	
 		}
 		if(a==b && b==c && c==a){
 		printf("TRIANGULO EQUILATERO\n");	
 		}
 		else if(a==b || b==c || c==a){
 		printf("TRIANGULO ISOSCELES\n");	
 		}
 	}
 
 
 
}
