//1243 - How Easy
//Arissa Yoshida
//19/07/2020
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 200

main()
{
    //250 500 10000
   int len=0;
    char c;
    int palavra=0;
    int quant =0;
    int total =0;
    int zero =0;
    int passou =0;
   while((c = getchar())!=EOF){
     if(c==' ' || c=='\n'){
        if(zero <= 1 && passou!=0){
            quant++;
            total+=len;
        }
        len =0;
        palavra =1;
        zero =0;
        int media =0;
        passou =0;
        if(c=='\n'){
            if(quant ==0){
                quant =1;
            }
           // printf("%d/%d\n", total,quant);
        media = total/quant;
        if(media<=3){
            printf("250\n");
        }else if(media<=5){
            printf("500\n");

        }else if(media>=6){
            printf("1000\n");

        }
        total =0;
        quant =0;
        
        }
       }else{
           
           if((c>=65 && c<=90)||(c>=97 && c<=122)){
              passou =1;
              len++;
               if(zero!=0){
                   zero++;
               }
           }else{
               if(c=='.'){
                   zero++;
               }else{
                   zero+=2;
               }
               
           }
       }
   }

    return 0;
}
