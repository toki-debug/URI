//1557 - Square Matrix III
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
  int a,c;
  while(1){
      scanf("%d",&a);
      if(a==0){
          break;
      }else{
         int  vet[a+1][a+1];
        int b[a+1];
        int k=1;
        int f=0;
         int m=0;
        for(int i=1;i<=a;i++){                 
            k=i-1;
            f=0;
            for(int j=1;j<=a;j++){
                
            vet[i][j] = pow(2,k);  
                k++;         
            if(i==a){
                b[j] = div(vet[i][j]);
            }
            if(i==a && j==a){
                c = b[j];
            }
            }
            
        }

        for(int i=1;i<=a;i++){
            for(int j=1;j<=a;j++){
                m = div(vet[i][j]);
                if(j!=1){
                printf(" ");
                }
               for(int l=0;l<c-m;l++){
                   printf(" ");
                
               }
                cout << vet[i][j];
            }
            cout << endl;
        }
        cout << endl;
      }
  }

    return 0;
}
