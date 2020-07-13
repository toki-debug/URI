//1133 - Rest of a Division
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	int b,c,d;
	scanf("%d %d",&b,&c);
	if(c<b){
		d=c;
		c=b;
		b=d;
	}
	for(d=b+1;d<c;d++){
		if(d%5==3 || d%5==2){
		printf("%d\n",d);
	}
	}
	
	
}
