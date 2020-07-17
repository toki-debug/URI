//1190 - Right Area
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	char c[2];
	int x=0,i,j,k=1,l=11,a=0;
	double mat[12][12]={0.0},sum=0.0,m=0.0;
	scanf("%s",&c[0]);

		for(i=0;i<12;i++){
		for(j=0;j<12;j++){

			scanf("%lf",&mat[j][i]);
			
		}
		}
	

		for(i=11;i>6;i--){
		for(j=k;j<l;j++){
				a++;
				sum+=mat[i][j];
				

	
		}
		l--;
		k++;
		}


	if(c[0]=='S'){
		printf("%.1lf\n",sum);
	}else if(c[0]=='M'){
		m=sum/a;
		printf("%.1lf\n",m);
	}
	
			
}
