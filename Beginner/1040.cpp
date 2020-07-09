//1040 - Average 3
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
 double a,b,c,d,e,av;
 scanf("%lf %lf %lf %lf", &a, &b, &c, &d); 
 a =a*2;
 b=b*3;
 c=c*4;
 av = (a+b+c+d)/10;
 	printf("Media: %.1lf\n",av);
 if(av>=7.0){
 	printf("Aluno aprovado.\n");	
}else if(av<5.0){
 	printf("Aluno reprovado.\n");	
}else if(av>=5 && av<=6.9){
	printf("Aluno em exame.\n");
	scanf("%lf",&e);
	printf("Nota do exame: %.1lf\n",e);
	av = (av+e)/2;
	if(av>=5){
		printf("Aluno aprovado.\n");
	}else{
		printf("Aluno reprovado.\n");
	}
	printf("Media final: %.1lf\n",av);
}
 
 
 
}
