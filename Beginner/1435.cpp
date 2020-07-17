//1435 - Square Matrix I
//Arissa Yoshida
#include <stdio.h>

main(){
    int x,i,j,k=1,l=x,a=1,h=x,z=1;
    while(1){
    scanf("%d",&x);
        if(x==0)break;  
        else{
        k=1;l=x;a=1;h=x;z=1;
        int mat[x+1][x+1];

            for(i=x;i>=1;i--){
                for(j=k;j<=l;j++){
                mat[j][i]=a;
                mat[i][j]=a;
                
                mat[j][z]=a;
                mat[z][j]=a;
                }
            z++;    
            a++;
            l--;
            k++;
            }
            for(i=1;i<=x;i++){
                for(j=1;j<=x;j++){
                    if(j==1){
                    printf("%3d",mat[i][j]);
                    }else{
                    printf(" %3d",mat[i][j]);
                }
                }
                printf("\n");
            }
            printf("\n");
        }
    }   
    return 0;   
}
