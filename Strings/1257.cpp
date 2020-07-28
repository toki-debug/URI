//1257 - Array Hash
//Arissa Yoshida
//15/05/2020
#include <bits/stdc++.h>

using namespace std;

int num(string s,int y){
  int sum =0;
  for(int i =0;i<s.size();i++){
    sum+= y+(s[i]-65)+i;
  }
  return sum;
}

main(){
  int a;
  cin >>a;
  for(int i=0;i<a;i++){
    int b;
    cin >> b;
    int sum =0;
    string h;
    getline(cin,h);
    for(int j=0;j<b;j++){
      string s;
      getline(cin,s);
      sum+=num(s,j);
    }
    cout << sum << endl;
  }
  return 0;
}

