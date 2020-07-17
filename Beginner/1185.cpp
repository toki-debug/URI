//1185 - Above the Secundary Diagonal
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	char c[2];
	int x=0,i,j;
	double mat[12][12]={0.0},sum=0.0,m=0.0;
	int l,a;
	scanf("%s",&c[0]);
	

		for(i=0;i<12;i++){
		for(j=0;j<12;j++){

			scanf("%lf",&mat[i][j]);	
		}
		}
		a=11;
		for(i=0;i<12;i++){
		for(j=0;j<a;j++){	
		
		sum+=mat[i][j];	
				
		}		
		a--;
					
		}



	if(c[0]=='S'){
		printf("%.1lf\n",sum);
	}else if(c[0]=='M'){
		m=sum/66;
		printf("%.1lf\n",m);
	}
	
			
}
