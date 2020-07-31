//1068 - Parenthesis Balance I
//Arissa Yoshida
//15/05/2020
#include <bits/stdc++.h>

using namespace std;

main(){
  char c;
  stack<char>a;
  int k=0;
  string s;
  while(getline(cin,s)){
    for(int i=0;i<s.size();i++){
    if(s[i]=='('){
      a.push(s[i]);
    }else if(s[i]==')'&&a.empty()){
      k=1;
      break;
    }else if(s[i]==')'&&!a.empty()){
      a.pop();
    }
    }
    if(a.empty()&&k!=1){
      cout << "correct"<<endl;
    }else{
      cout <<"incorrect"<<endl;
      k=0;
      while(!a.empty()){
      a.pop();
      }
    }


  }


  return 0;
}

