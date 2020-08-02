//1957 - Converting to Hexadecimal
//Arissa Yoshida
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char>vet;
   int x;
   int num=0;
   cin >> x;
   while(x>0){
    num = x%16; 
    char a;
    if(num>9){
        a = 55+num;
        vet.push_back(a);
    }else{
        a = 48 + num;
        vet.push_back(a);
    }
    x/=16;
   }
   for(int i=vet.size()-1;i>=0;i--){
       cout << vet[i];
   }
   cout <<endl;
   
}
