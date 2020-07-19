//1837 - Preface
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>

main(){ 
    int a,b,q,s,r,p;
    scanf("%d %d",&a,&b);
    
        p=b;
        if(b<0){
            p*=-1;
        }
        for(r=0;r<p;r++){
            s = a -r;
            if(s%b==0){
                break;
            }}
            q =s/b;    
        


    

    printf("%d %d\n",q,r);
}
