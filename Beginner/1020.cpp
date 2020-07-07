//1020 - Age in Days
//Arissa Yoshida
#include <stdio.h>

#include <stdlib.h>

main(){
    int a=0,b=0,c=0,d=0;
    scanf("%d",&a);
    b = a/365;
    a%=365;
    d = a/30;
    a%=30;
    

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",b,d,a);    
}
