//2006 - Identifying Tea
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x,b=1,g=0,a=0,c=1,r=1;
    
    scanf("%d",&x);
    for(a=1;a<=5;a++){
    	scanf("%d",&b);
    	if(b==x){
    		g++;
    		}
    }
    printf("%d\n",g);
}
