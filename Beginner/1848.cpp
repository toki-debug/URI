//1848 - Counting Crow
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){ 
    char caw[20];
    char bin[4];
    char one[20];
    int h=0,x,sum=0,g=0;
    while(h!=3){
        scanf("%s",one);
         if(one[0]=='c'){
             g++;
            if(g==2){
            printf("%d\n",sum);
            h++;
            sum=0;
            g=0;}
           
            
            
        }else{

        //*: 42
        //-: 95

        for(x=0;x<3;x++){
            if(one[x]==42){
                if(x==0){
                    sum+=4;
                }else if(x==1){
                    sum+=2;
                }else{
                    sum+=1;
                }
            }
            }
        }
       
    }

}
