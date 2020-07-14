//1144 - Logical Sequence
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main () {
	int n,a,b=1,c=1,d=1,e=0,f=7,h=2;
	scanf("%d",&n);
	for(a=1;a<=n;a++){
	f=f+e;
		for(h=1;h<=2;h++){
		printf("%d %d %d\n",a,b,d);
		b+=1;d+=1;
		}
	d-=2;
	b-=2;	
	c+=2;
	d=d+f;
	e=6*(a+1);
	b = b + c;
	}

}

