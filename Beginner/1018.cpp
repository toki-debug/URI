//1018 - Banknotes
//Arissa Yoshida
#include <stdio.h>

int main(){
    //100 50 20 10 5 2 1
    int a=0,a1=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0;
    scanf("%d",&a);
    b = a/100;
    c = (b*100);
    a1 =a-c;
    d = ((a1)/50);
    c = (d*50);
    a1 = a1-c;
    e =((a1)/20);
    c=(e*20);
    a1 = a1-c;
    f=((a1)/10);
    c=(f*10);
    a1 = a1-c;
    g=((a1)/5);
    c=(g*5);
    a1 = a1-c;
    h=((a1)/2);
    c=(h*2);
    a1 = a1-c;
    
    
    

    
printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",a,b,d,e,f,g,h,a1);
return 0;
}
