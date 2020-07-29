//1273 - Justifier
//Arissa Yoshida
//15/05/2020
#include <bits/stdc++.h>

using namespace std;



main(){
  int x=1;
  vector<int>c;
  int y;
  int h=0;
  while(1){

  cin >> x;
  if(x==0){
    break;
  }else{
    if(h!=0){
      cout << endl;
    }
    h=1;
      y =0;
      vector<string>a;
      for(int i=0;i<=x;i++){
        string b;
        getline(cin,b);
        a.push_back(b);
        c.push_back(b.size());
        if(y<b.size()){
        y = b.size();
        }
      }

      for(int i=1;i<=x;i++){
        int k = y-c[i];

        for(int j=0;j<k;j++){
          cout << " ";
        }
        cout << a[i];

        cout << endl;
      }

      a.clear();
      c.clear();
    }

}




  return 0;
}

