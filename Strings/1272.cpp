//1272 - Hidden Message
//Arissa Yoshida
//15/05/2020
#include <bits/stdc++.h>

using namespace std;



main(){
  int x;
  cin >> x;
  getchar();
  char a;
  string b;
  for(int i=0;i<x;i++){
    int y=0;
    int k=2;
    while((a = getchar())!='\n'){
      if(y==0&&a!=' '&&k==2){
        cout << a;
        y=1;
      }else{
        if(a==' '){
          k=1;
        }
        if(k==1 && a!=' '){
          cout << a;
          k=0;
        }
      }
    }
    cout << endl;
  }

  return 0;
}

