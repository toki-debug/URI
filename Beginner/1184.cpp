//1184 - Below the Main Diagonal
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	char c[2];
	int x=0,i,j;
	double mat[12][12]={0.0},sum=0.0,m=0.0;
	int l;
	scanf("%s",&c[0]);
	

		for(i=0;i<12;i++){
		for(j=0;j<12;j++){

			scanf("%lf",&mat[i][j]);
			
				if(i==j){
					x=1;
				}
				if(i!=0 && x==0){
					
					sum+=mat[i][j];
				}	
				
				
				

			}
		
			x=0;
		}


	if(c[0]=='S'){
		printf("%.1lf\n",sum);
	}else if(c[0]=='M'){
		m=sum/66;
		printf("%.1lf\n",m);
	}
	
			
}
