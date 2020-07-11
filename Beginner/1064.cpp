//1064 - Positives and Average
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main () {
	double x[7]={0.0},s=0.0;
	int y,z=0;
	for(y=0;y<=5;y++){
	scanf("%lf",&x[y]);
	}
	for(y=0;y<=5;y++){
	if(x[y]>=0){
		z++;
		s = s + x[y];
	}
	}
	s = s/(z);
	printf("%d valores positivos\n%.1lf\n",z,s);
}
