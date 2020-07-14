//1134 - Type of Fuel
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main () {
	int a,b=1,al=0,gas=0,dis=0;
	while(b==1){
		scanf("%d",&a);
	switch (a){
    case 1:
    al++;
        break;
    case 2:
    gas++;
    break;
    case 3:
    dis++;
    break;
    case 4:
    b=2;
    break;
  	}

}
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",al,gas,dis);

}
