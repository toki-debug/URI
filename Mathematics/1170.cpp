//1170 - Blobs
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int x,a,g=0;
    double r,num;
    scanf("%d",&a);
    for(x=0;x<a;x++){
        scanf("%lf",&num);
        g=0;
        r =num;
        while(r>1){
            r/=2;
            g++;
        }
        printf("%d dias\n",g);
    }
    return 0;
}

