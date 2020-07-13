//1131 - Grenais
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


main(){
	int a,b,r,c=0,g=0,i=0,e=0;
	do{
		scanf("%d %d",&a,&b);
		if(a>b){
			i++;
		}else if(b>a){
			g++;
		}else{
			e++;
		}
	do{
	printf("Novo grenal (1-sim 2-nao)\n");
	scanf("%d",&r);
	}while(r!=1&&r!=2);
	c++;
	}while(r==1);
	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",c,i,g,e);
	if(i>g){
			printf("Inter venceu mais\n");
		}else if(g>i){
			printf("Gremio venceu mais\n");
		}else{
			printf("Não houve vencedor\n");
		}
}
