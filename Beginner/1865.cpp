//1865 - Mjölnir
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


main(){ 
   int x,i,p=0;
   scanf("%d",&x);
   char confere[25]="Thor";
   for(i=0;i<x;i++){
    char name[25];
    int h=0;
    scanf("%s %d",name,&p);
    p = strlen(name);
    if(p==4){
        for(p=0;p<4;p++){
            if(confere[p]==name[p]){
                h++;
            }
        }
    }
    if(h==4){
        printf("Y\n");
    }else{
        printf("N\n");
    }
   }
}
