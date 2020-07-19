//1847 - Welcome to the Winter!
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);	

    if((a>b&&c>=b)||(b>a&&c>b&&(c-b)>=(b-a))||((a>b&&b>c)&&((a-b)>(b-c)))||(a==b&&c>b)){
    	printf(":)\n");
    }else{
    	printf(":(\n");
    }
    

}
