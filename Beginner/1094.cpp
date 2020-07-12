//1094 - Experiments
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
	int n[1000],x;
	int a,c=0,r=0,s=0,y;
	char z[2];
	int t;
	double pc,pr,ps;
	scanf("%d",&x);
	for(a=1;a<=x;a++){
	scanf("%d %s",&y,z);
		if(strcmp (z, "C") == 0){
			c = c+y;
		}else if(strcmp (z, "R") == 0){
			r = r+y;
		}else if(strcmp (z, "S") == 0){
			s = s+y;
		}
	}
	t = c+r+s;

	pc = (100.0*c)/t;
	pr = (100.0*r)/t;
	ps = (100.0*s)/t;

	printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n",t,c,r,s,pc,pr,ps);
}
