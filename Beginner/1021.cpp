//1021 - Banknotes and Coins
//Arissa Yoshida
#include <stdio.h>

int main(){
    //100 50 20 10 5 2 1
    int a=0,a1=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0;
    double a2=0.0;
    scanf("%lf",&a2);
    a = a2 * 100;
    b = a/10000;
    c = (b*10000);
    a1 =a-c;
    d = ((a1)/5000);
    c = (d*5000);
    a1 = a1-c;
    e =((a1)/2000);
    c=(e*2000);
    a1 = a1-c;
    f=((a1)/1000);
    c=(f*1000);
    a1 = a1-c;
    g=((a1)/500);
    c=(g*500);
    a1 = a1-c;
    h=((a1)/200);
    c=(h*200);
    a1 = a1-c;


    o=((a1)/100);
    c=(o*100);
    a1 = a1-c;

    //--moedas
    i=((a1)/50);
    c=(i*50);
    a1 = a1-c;

    j=((a1)/25);
    c=(j*25);
    a1 = a1-c;
    k=((a1)/10);
    c=(k*10);
    a1 = a1-c;
    l=((a1)/5);
    c=(l*5);
    a1 = a1-c;
    m=((a1)/1);
    c=(m*1);
    a1 = a1-c;
    
    
    

    
printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n",b,d,e,f,g,h,o);
printf("%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",i,j,k,l,m);
return 0;
}
