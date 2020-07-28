//1253 - Caesar Cipher
//Arissa Yoshida
#include <iostream>
#include <math.h>
#include <iomanip> 
#include <stdlib.h>
 
using namespace std;
 
int main() {

   int x;
   cin >> x;
   int a,i,z,j;
   string c;


   for(j=0;j<x;j++){
       cin >> c >> a; 
        z =c.size();
        for(i=0;i<z;i++){
            c[i]-=a;
            if(c[i]<65){
                c[i]+=26;

            }
            cout << c[i];
        }
        cout << "\n";
   }


  
   
    return 0;
}
