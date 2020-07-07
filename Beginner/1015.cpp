//1015 - Distance Between Two Points
//Arissa Yoshida
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>    
    main(){
    
        double a,b,c,d,e,f;
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        e = ((a-c)*(a-c)) + ((b-d)*(b-d));
        f =sqrt(e);     
        
        printf("%.4lf\n",f);
            
    }
