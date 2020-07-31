//1062 - Rails
//Arissa Yoshida
//22/05/2020
//URI 1062
#include <bits/stdc++.h>

using namespace std;

main(){
  int x=1,y=1;//Entradas
  stack<int>a;//Pilha de entrada
  stack<int>b;//Pilha de espera
  stack<int>c;//Pilha de saída
  
  while(x!=0){
    scanf("%d",&x); //primeira entrada
    y=1;
    if(x!=0){
      while(y!=0){
        for(int i=0;i<x;i++){
          scanf("%d",&y);
          a.push(y);
          if(y==0){
            i=x;
          }
        }
        int z = x; // Contador
        int k=0;
        if(y!=0){
          while(z!=0){
            if(!a.empty() && a.top()==z){
              c.push(a.top());
              a.pop();
              k=0;
            }else if(!b.empty() && b.top()==z){
              c.push(b.top());
              b.pop();
              k=0;
            }else{
              if(!a.empty()){
              b.push(a.top());
              a.pop();
              z++;
              }else{
                break;
              }
              
            }
            z--;
          }
          if(c.size()==x){
            printf("Yes\n");
          }else{
            printf("No\n");
          }
          //Esvaziando pilha B e C
          while(!b.empty()){
            b.pop();
          }
          while(!c.empty()){
            c.pop();
          }

        }else{
          printf("\n");
        } 
      }
    }
  }
  
 
return 0;
}

