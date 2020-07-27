//1234 - Dancing Sentence
//Arissa Yoshida
//14/05/2020
#include <bits/stdc++.h>

using namespace std;


main(){
  string s;
  while(getline(cin,s)){
    int x=1;
    for(int i=0;i<s.size();i++){
      if((s[i]>=65&&s[i]<=122)){
        x++;
        if(x%2==0){
          if(s[i]>=97&&s[i]<=122){
            s[i] = s[i] - 32;
          }
        }else{
          if(s[i]>=65&&s[i]<=90){
            s[i] = s[i] + 32;
          }
        }
      }
      cout << s[i];
    }
    cout << "\n";
  }

  return 0;
}

