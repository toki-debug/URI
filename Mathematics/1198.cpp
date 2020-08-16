//1198 - Hashmat the Brave Warrior
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    long long int a,b,c;
    while(scanf("%lld",&a)==1){
    scanf("%lld",&b);
    c = a-b;
    if(c<0){
        c*=-1;
    }
    printf("%lld\n",c);
    }
    return 0;
}

