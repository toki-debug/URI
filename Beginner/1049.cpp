//1049 - Animal
//Arissa Yoshida

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char x[20],y[20],z[20];
	scanf("%s %s %s",x,y,z);
	if(strcmp (x, "vertebrado") == 0){
		if(strcmp (y, "ave") == 0){
			if(strcmp (z, "carnivoro") == 0){
				printf("aguia\n");
			}else{
				printf("pomba\n");
			}
		}else{
			if(strcmp (z, "onivoro") == 0){
				printf("homem\n");
			}else{
				printf("vaca\n");
			}
		}
		


		//INVERTEBRADO
	}else{
		if(strcmp (y, "inseto") == 0){
			if(strcmp (z, "hematofago") == 0){
				printf("pulga\n");
			}else{
				printf("lagarta\n");
			}
		}else{
			if(strcmp (z, "hematofago") == 0){
				printf("sanguessuga\n");
			}else{
				printf("minhoca\n");
			}
		}
	}

}
