//1080 - Highest and Position
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main () {
	int n[1000],x;
	int a,b,c,r;
	
	
	scanf("%d",&n[1]);
	b=n[1];
	for(x=2;x<=100;x++){
		scanf("%d",&n[x]);
		if(b<n[x]){
			b=n[x];
			a=x;
		}
	}
	printf("%d\n%d\n",b,a);
	
}
