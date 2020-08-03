//1161 - Factorial Sum
//Arissa Yoshida
#include <stdio.h>

main(){
    int a,b,x;
    while(scanf("%d",&a)!=EOF){
    scanf("%d",&b);
    long long int c=1,d=1;
    for(x=1;x<=a;x++){
        c*=x;
    }
    for(x=1;x<=b;x++){
        d*=x;
    }
    printf("%lld\n",(c+d));
       }
}
