//1478 - Square Matrix II
//Arissa Yoshida
//03/06/2020
#include <bits/stdc++.h>
#define MAXN 1050
using namespace std;

int div(int x){
    int t=0;
    while(x>9){
        x/=10;
        t++;
    }
    return t;
}
main(){
  int a;
  while(1){
      scanf("%d",&a);
      if(a==0){
          break;
      }else{
         int  vet[a+1][a+1];
        int k=1;
        int f=0;
         int m=0;
        for(int i=1;i<=a;i++){
           
               
            k=i;
            f=0;
            for(int j=1;j<=a;j++){
                
            vet[i][j] = k;
            
                    m = div(vet[i][j]);
               for(int l=0;l<2-m;l++){
                   printf(" ");
               }
                
            if(k>1&&f==0){
                k--;
            }else{
            f=1;    
            k++;
            }
                
            cout << vet[i][j];
            if(j!=a){
            printf(" ");
            }
            }
            cout << endl;
        }
        cout << endl;
      }
  }

    return 0;
}
