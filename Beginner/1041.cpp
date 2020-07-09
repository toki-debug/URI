//1041 - Coordinates of a Point
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	double x,y;
	scanf("%lf %lf", &x, &y);
	if(x==y && x==0.0){
		printf("Origem\n");	
	}else if(x>0.0 && y>0.0){
		printf("Q1\n");
	}else if(x>0.0 && y<0.0){
		printf("Q4\n");
	}else if(x<0.0 && y>0.0){
		printf("Q2\n");
	}else if(x<0.0 && y<0.0){
		printf("Q3\n");
	}
	
	if(y==0 && x!=y){
		printf("Eixo X\n");
	}else if(x==0 && y!=x){
		printf("Eixo Y\n");
	}
	
}
