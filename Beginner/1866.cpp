//1866 - Bill
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x,b=1,g=0,a=0,c=1,r=1;
    
    scanf("%d",&x);
    for(a=1;a<=x;a++){
    	scanf("%d",&b);
    	if(b%2==0){
    		printf("0\n");
    	}else{
    		printf("1\n");
    	}
    }
}
