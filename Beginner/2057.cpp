//2057 - Time Zone
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>

main(){
    int a,b,c,e;
    scanf("%d %d %d",&a,&b,&c);
    e = a+b+c;
    if(e>24){
        e=e-24;
    }else if(e<0){
        e =e+24;
    }
    printf("%d\n",e);
    return 0;
}
