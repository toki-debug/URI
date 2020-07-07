//1019 - Time Conversion
//Arissa Yoshida
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>    
    main(){
    
        int a,b=0,c=0,d=0;
        scanf("%d",&a);
        int x;
        c = a/60;
        a%=60;
        b=c/60;
        c%=60;    
        printf("%d:%d:%d\n",b,c,a);
            
    }
