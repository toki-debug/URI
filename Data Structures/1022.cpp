//1022 - TDA Rational
//Arissa Yoshida
//20/05/2020
#include <bits/stdc++.h>
using namespace std;



main(){
  int x;
  cin >> x;
  int ar[4],a,b;
   char s,n; 
  for(int i=0;i<x;i++){
    a=0,b=0;
    scanf("%d %c %d %c %d %c %d",&ar[0],&n,&ar[1],&s,&ar[2],&n,&ar[3]);
      if(s=='+'){
        b=1;
      }else if(s=='-'){
        b=2;
      }else if(s=='*'){
        b=3;
      }
    int r1,r2;
    if(b==1){
      r1 = (ar[0]*ar[3]) + (ar[1]*ar[2]);
      r2 = (ar[1]*ar[3]);
    }else if(b==2){
      r1 = (ar[0]*ar[3]) - (ar[1]*ar[2]);
      r2 = (ar[1]*ar[3]);
    }else if(b==3){
      r1 = (ar[0]*ar[2]);
      r2 = (ar[1]*ar[3]);
    }else{
      r1 = (ar[0]*ar[3]);
      r2 = (ar[1]*ar[2]);
    }
    cout << r1 << "/" << r2 << " = ";
    a=1,b=2;
    int c = r1;
    int d = r2;
    int e =1;
      while(c>=b || d >=b ){
        if(c%b==0 && d%b==0){
          c/=b;
          d/=b;
          e*=b;
        }else{
          b++;
        }
      }
    cout  << r1/e << "/" << r2/e << endl;
    
  }
  
  return 0;
}
