//1962 - A Long, Long Time Ago
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>

main(){
    int a,x,z,c;
    scanf("%d",&a);
    for(x=0;x<a;x++){
        scanf("%d",&z);
        int b,c=0;
        b = 2015 - z;
        if(b<=0){
            b*=-1;
            b = b+1;
            printf("%d A.C.\n",b);
        }else{
            printf("%d D.C.\n",b);    
        }
        
    }


    return 0;
}
