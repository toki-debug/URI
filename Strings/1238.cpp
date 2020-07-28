//1238 - Combiner
//Arissa Yoshida
#include <iostream>
#include <math.h>
#include <iomanip> 
#include <stdlib.h>
 
using namespace std;
 
int main() {

   int x;
   cin >> x;
   int a,i,z,j,b,k=0;
   string c,d,r;


   for(j=0;j<x;j++){
       cin  >> c >> d;
        if(c.size()>=d.size()){
            a =c.size();
            b =d.size();
        }else{
            a= d.size();
            b = c.size();
        }
        z=0;
        while(z<=a){
           if(z<c.size())cout<<c[z];
           if(z<d.size())cout << d[z];
        
        z++;
   }

    cout << "\n";
   }
  
   
    return 0;
}
