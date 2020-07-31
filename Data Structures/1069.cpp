//1069 - Diamonds and Sand
//Arissa Yoshida
//15/05/2020
#include <bits/stdc++.h>

using namespace std;

main(){
  int x;
  cin >> x;
  char c;
  stack<int>a;
  getchar();
  for(int i=0;i<x;i++){
    int sum=0;
    while((c=getchar())!='\n'){
      if(c=='<'){
        a.push(1);
      }else if(c=='>'&&!a.empty()){
        a.pop();
        sum++;
      }
    }
    cout << sum << endl;
    while(!a.empty()){
      a.pop();
    }
  }

  return 0;
}

