//2029 - Honey Reservoir
//Arissa Yoshida
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double d,h,a,v;
   while(scanf("%lf %lf",&v,&d)!=EOF){
       double  r= d/2;
       h=v/(r*r*3.14);
       a = (3.14*r*r);
       printf("ALTURA = %.2lf\n",h);
       printf("AREA = %.2lf\n",a);
   }
 
}
