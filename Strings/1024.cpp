//1024 - Encryption
//Arissa Yoshida
//19/05/2020
#include <bits/stdc++.h>

using namespace std;

main(){
  int x;
  cin >> x;
  getchar();
  char c;
  vector<char>s;
  for( int i = 0;i<x;i++){
    int k=0,l=0;
    while((c = getchar())!='\n'){
      if((c>=65 && c<=91)||c>=97&&c<=122){
        s.push_back(c+3);
        l++;
      }else{
        s.push_back(c);
      }
      k++;
    }
    int h=0;
    reverse(s.begin(),s.end());
    for(int j=0;j< k;j++){
        
        
        if(j>=k/2){
          s[j]=s[j]-1;
        }
        
        
      
      
      cout << s[j];    
      
    
    }
    cout << endl;
    s.erase(s.begin(),s.end());
  }
  
  return 0;
}
