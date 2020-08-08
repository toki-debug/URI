//2028 - Sequence of Sequence
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>

main(){
    int a[1000]={0},x,y,z,p=0,n=0;
        while(scanf("%d",&y)!=EOF){
            z=0;
            n=0;
            p++;
            for(x=1;x<=y;x++){
                n+=x;
            }

            if(y==0){
                printf("Caso %d: 1 numero\n",p);
                printf("0");
            }else{ 
                printf("Caso %d: %d numeros\n",p,n+1);   
                printf("0");
                do{
                    for(x=0;x<z;x++){
                        printf(" %d",z); 
                    }
                    z++;   
                }while(z<=y);
            }
            printf("\n\n");
        
        }
    

    return 0;
}
