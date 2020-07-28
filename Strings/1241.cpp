//1241 - Fit or Dont Fit II
//Arissa Yoshida
//19/05/2020
#include <bits/stdc++.h>

using namespace std;

main(){
  int x;
  cin >> x;
  vector<char>a;
  vector<char>b;
  getchar();
  for(int i=0;i<x;i++){
    char c;
    
    while((c=getchar())!=' '){
      a.push_back(c);
    }
    while((c=getchar())!='\n'){
      b.push_back(c);
    }
    int k=0;
    if(b.size()>a.size()){
      k=1;
    }else{
      int d=0;
      for(int j=(a.size() - b.size());j<a.size();j++){
        if(b[d]!=a[j]){
          k=1;
          break;
       
        }
         d++;
      }
    }
    a.erase(a.begin(),a.end());
    b.erase(b.begin(),b.end());
    if(k==1){
      cout << "nao encaixa" << endl;
      
    }else{
      cout << "encaixa" << endl;
    }
  }
  
  
  return 0;
}
