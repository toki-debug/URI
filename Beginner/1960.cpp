//1960 - Roman Numerals for Page Numbers
//Arissa Yoshida
//05/06/2020
#include <bits/stdc++.h>
//#define MAXN 1050
using namespace std;

int div(int a){
    int t=0;
    while(a>9){
        a/=10;
        t++;
    }
    return t;
}
main(){
    //Exemplo com 666
    int x,a,b;
    scanf("%d",&x);
    a = div(x);
    //a = 3
    b = a;
    int c=0;
    int d =x;
    int num = x;
    for(int i=0;i<a+1;i++){ //while a < 3
        
        num=d/pow(10,b);
        int k=num;
        c = a-i;
        if(b==2){
            if(num==9){
                printf("CM");
            }else if(num>5&&num<9){
                printf("D");
                k = num-5;
                for(int j=0;j<k;j++){
                    printf("C");
                }
            }else if(num==5){
                printf("D");
            }else if(num==4){
                printf("CD");
            }else if(num>0){
               k = num;
                for(int j=0;j<k;j++){
                    printf("C");
                } 
            }
        }else if(b==1){
            if(num==9){
                printf("XC");
            }else if(num>5&&num<9){
                printf("L");
                k = num-5;
                for(int j=0;j<k;j++){
                    printf("X");
                }
            }else if(num==5){
                printf("L");
            }else if(num==4){
                printf("XL");
            }else if(num>0){
               k = num;
                for(int j=0;j<k;j++){
                    printf("X");
                } 
            }

        }else{
            if(num==9){
                printf("IX");
            }else if(num>5&&num<9){
                printf("V");
                k = num-5;
                for(int j=0;j<k;j++){
                    printf("I");
                }
            }else if(num==5){
                printf("V");
            }else if(num==4){
                printf("IV");
            }else if(num>0){
               k = num;
                for(int j=0;j<k;j++){
                    printf("I");
                } 
            }

        }
        
        d -=num*pow(10,b);
        
       /* if(i==a && d<=9){
            i++;
        }*/
        b = div(d);
        
        
    }
    printf("\n");

   
    return 0;
}
