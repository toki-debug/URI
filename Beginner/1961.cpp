//1961 - Jumping Frog
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>

main(){
    int a,b,x,y,k=0;
    scanf("%d %d",&a,&b);
    int vet[b+1];
    scanf("%d",&vet[0]);
    for(x=1;x<b;x++){
        y=0;
        scanf("%d",&vet[x]);
        y = vet[x]-vet[x-1];
        
        if(y<0){
           y*=-1; 
        }
        
        if(y<=a){
            k++;
        }else{
            break;
        }

    }
    if(k==(b-1)){
        printf("YOU WIN\n");
    }else{
        printf("GAME OVER\n");
    }


    return 0;
}
