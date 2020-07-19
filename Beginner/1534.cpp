//1534 - Array 123
//Arissa Yoshida
//20/05/2020
#include <bits/stdc++.h>

using namespace std;

main(){
  int x;
  
  while((scanf("%d",&x))!=EOF){
  int mat[x][x];
  int k = x;
  for(int i =0;i<x;i++){
    for(int j=0;j<x;j++){
      if(i==j){
        mat[i][j]=1;      
      }else{
        mat[i][j]=3;
      }
    }
    k--;
  mat[i][k] = 2;
  }
  for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
      printf("%d",mat[i][j]);
    }
    printf("\n");
  }

  }
  

return 0;
}
