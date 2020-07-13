//1116 - Dividing X by Y
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	int n,x,y,a;
	float r;
	scanf("%d",&n);
	for(a=1;a<=n;a++){
	scanf("%d %d",&x,&y);
	if(y==0){
		printf("divisao impossivel\n");
	}else{

		r=(double)x/y;
		printf("%.1lf\n",r);
	}

	}

	
}
