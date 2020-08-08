//2059 - Odd, Even or Cheating
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>

main(){
    int a,b,c,d,e,v=1,gg=0;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    b = b+c;
    gg=d+e;
    if(gg==1){
        v=1;
    }else if(gg==2){
        v=2;
    }else{
        if(b%2==0&&a==1||b%2!=0&&a==0){
            v=1;
        }else{
            v=2;
        }
    }   
    printf("Jogador %d ganha!\n",v);
      return 0;
    
    
}
