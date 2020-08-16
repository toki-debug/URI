//1214 - Above Average
//Arissa Yoshida
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int x;
   int vet[1001];
   cin >> x;
   for(int i=0;i<x;i++){
       int a;
       cin >> a;
       int val,sum=0;
       for(int j=0;j<a;j++){
           cin >> vet[j];
           sum+=vet[j];
       }
       double media=0.0;
        media = (double)(sum/a);
        sum=0;
        for(int j=0;j<a;j++){
            if(vet[j]>media){
                sum++;
            }
        }double otro;
       otro = (double)sum/a* 100;
        printf("%.3lf%%\n",otro);
   }
 
}
