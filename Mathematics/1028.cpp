//1028 - Collectable Cards
//Arissa Yoshida
//20/05/2020
#include <bits/stdc++.h>
using namespace std;

main(){
    int a,x,b,c,y,e,f;
    scanf("%d",&a);
    for(x=1;x<=a;x++){
        scanf("%d %d",&b,&c);
        //Modular
        e=0; // Auxiliar
        if(b>c){//para o valor de b ser o menor
          e = b;
          b = c;
          c = e; 
        }
        while(c%b!=0){
          e = b;
          b  = c%b;
          c = e;
        }
      cout << b <<endl;
    }
    return 0;
}
