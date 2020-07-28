//1249 - Rot13
//Arissa Yoshida
//15/05/2020
#include <bits/stdc++.h>

using namespace std;



main(){
  char a;
  char b;
  while((a = getchar())!=EOF){
    if(a=='\n'){
      cout << endl;
    }else if((a>=65 && a <=90)){
      b = a+13;
      if(b>90){
        b = b - 91;
        b = 65+b;
      }
      cout << b;
    }else if(a>=97 && a<=122){
      int c=a;
      c = int(a)+13;
      if(c>122){
        c = c-123;
        c = 97+c;
      }
      cout << char(c);

    }else{
      cout << a;
    }
  }


  return 0;
}

