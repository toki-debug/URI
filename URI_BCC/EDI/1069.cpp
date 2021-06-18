//URI 1069
//Arissa Yoshida
#include <bits/stdc++.h>

using namespace std;


int main(){
  int x;
  scanf("%d",&x);

  getchar();
  char a;
  int num=0;
  while(x--){
    stack<char>pilha;
    while((a=getchar())!='\n'){
      if(a=='<'){
        pilha.push(a);
      }else if(a=='>' && !pilha.empty()){
        if(pilha.top()=='<'){
        pilha.pop();
        num++;
        }
      }
    }
    printf("%d\n",num);
    num =0;
  }
}

