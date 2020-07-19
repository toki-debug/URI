//1827 - Square Array IV
//Arissa Yoshida
//04/06/2020
#include <stdio.h>
#define MAXN 1050


int main(){
    int x;
    while(scanf("%d",&x)!=EOF){
            int i,j;
            int vet[x][x];
            int div = x/3;
            int k=x-1;
           for(i=0;i<x;i++){
               for(j=0;j<x;j++){

                    vet[i][j] =0;

                   if(i==j){
                       vet[i][j]=2;
                   }
                   vet[i][k]=3;
                   if(i>=div&&i<=(x-1-div)&&j>=div&&j<=(x-1-div)){
                   vet[i][j] =1;
                   }
                   vet[(x/2)][(x/2)] =4;
                  printf("%d",vet[i][j]);
               }
            printf("\n");
               k--;
           }
           printf("\n");

    }


    return 0;
}

