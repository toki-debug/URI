//2060 - Bino's Challenge
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x,b=1,g=0,a=0,r=0,z=2;
    
    scanf("%d",&x);
    int c[10]={0};
    for(a=1;a<=x;a++){
    	scanf("%d",&b);
    	z=2;
    	while(z<=5){
    		if(b%z==0){
    			c[z]++;
    		}
    	z++;
    	}
    }
    for(a=2;a<=5;a++){
    printf("%d Multiplo(s) de %d\n",c[a],a);
	}

}
