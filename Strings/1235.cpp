//1235 - Inside Out
//Arissa Yoshida
//20/05/2020
#include <bits/stdc++.h>
using namespace std;



main(){
  int x;
  cin >> x;
  vector<char>a;
   getchar();
  for(int i=0;i<x;i++){
    char c;
   
    while((c=getchar())!='\n'){
      a.push_back(c);
    }
    int b=a.size();
    int d=ceil((a.size())/2);
    int k=0;
    
    for(int i=d-1;i>=0;i--){
    cout << a[i];
   }
   for(int i=b-1;i>=d;i--){
    cout << a[i];
    }
    cout << endl;
    a.erase(a.begin(),a.end());
  }
  
  
  
  return 0;
}
