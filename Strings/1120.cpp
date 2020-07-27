//1120 - Contract Revision
//Arissa Yoshida
//19/05/2020
#include <bits/stdc++.h>

using namespace std;

main(){
  char a,c;

  while((a = getchar())!='0'){
    int k=0;
    getchar();
    while((c = getchar())!='\n'){
      if(c!=a){
        if(c!='0'&&k==0){
          k=1;
        }
        if(k==1){
          cout << c;
        }
      }
    }
    if(k==0){
      cout << "0" ;
    }
    cout << endl;
  }

  
  return 0;
}
