//1158 - Sum of Consecutive Odd Numbers III
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	int x,a,b,y,z=0,c=1,sum=0,d;
	scanf("%d",&x);
	for(y=1;y<=x;y++){
		scanf("%d %d",&a,&b);
		d=a;
		sum=0;
		z=0;
		c=0;
		do{
			if(d%2!=0){		
				sum = sum + d;
				z++;
			}

			
			c++;
			d = a + c;
		
		}while(z<b);
		printf("%d\n",sum);
	}
}
