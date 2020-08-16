//1240 - Fit or Dont Fit I
//Arissa Yoshida
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    string a,b;
    for(int i=0;i<x;i++){
        cin >> a >> b;
        int tam=0;
        tam = a.size() -b.size();
        int y=0;
        for(int j=0;j<b.size();j++){
            if(a[tam+j]!=b[j]){
                y=1;
                break;
            }
        }
        if(y==1){
            cout <<"nao encaixa" << endl;
        }else{
            cout << "encaixa" << endl;
        }
    }

 
}

