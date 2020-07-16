//1182 - Column in Array
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	char c[2];
	int x=0,i,j;
	double mat[12][12]={0.0},sum=0.0,m=0.0;
	int l;
	scanf("%d %s",&l,&c[0]);

		for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%lf",&mat[i][j]);
			
			}
		}
	for(j=0;j<12;j++){
		sum+=mat[j][l];
	}

	if(c[0]=='S'){
		printf("%.1lf\n",sum);
	}else if(c[0]=='M'){
		m=sum/12;
		printf("%.1lf\n",m);
	}
	
			
}
