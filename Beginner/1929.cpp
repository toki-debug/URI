//1929 - Triangle
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main() {
    int a,b,c,d;
   	scanf("%d %d %d %d",&a,&b,&c,&d);
   	if((a+b>c&&c+a>b&&b+c>a)||(a+b>d&&d+a>b&&b+d>a)||(a+c>d&&d+a>c&&d+c>a)||(b+c>d&&b+d>c&&c+d>b)){
   		printf("S\n");
   	}else{
   		printf("N\n");
   	}

}
