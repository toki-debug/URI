//1168 - LED
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


main(){
   int n,x,a,u,z;
   char p[1000];
   scanf("%d",&n);
   for(x=0;x<n;x++){
     scanf("%s",p);
     z=0;
     a = strlen(p);
     for(u=0;u<a;u++){
       if(p[u]=='1'){
         z+=2;
       }else if(p[u]=='5'||p[u]=='2'||p[u]=='3'){
         z+=5;
       }else if(p[u]=='4'){
         z+=4;
       }else if(p[u]=='6'||p[u]=='9'||p[u]=='0'){
         z+=6;
       }else if(p[u]=='7'){
         z+=3;
       }else if(p[u]=='8'){
         z+=7;
       }
     }
     printf("%d leds\n",z);
   }
}

