//1255 - Letter Frequency
//Arissa Yoshida
//14/07/2020
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
  char a[205];
  int alfa[30];
  int x;
  scanf("%d",&x);
  int i=0,j=0;

  char c;

  int k=0;
  getchar();
  for(j=0;j<x;j++){

    for(i=1;i<=26;i++){
      alfa[i]=0;
    }

    while((c = getchar())!='\n'){

      if(c>=65 && c<=90){
        c-=64;
        alfa[c]++;
      }else if(c>=97 && c<=122){
        c-=96;
        alfa[c]++;
      }

    }
  /*  for(i=1;i<=26;i++){
      printf("%d\n",alfa[i]);
    }*/

    int maior=0;
    for(i=1;i<=26;i++){
      if(alfa[i]>maior){
        maior = alfa[i];
      }
    }
    char r;
    for(i=1;i<=26;i++){
      if(alfa[i]==maior){
        r = i+96;
        printf("%c",r);
      }
    }
      printf("\n");
  }
	return 0;
}

