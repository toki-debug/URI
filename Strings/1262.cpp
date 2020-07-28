//1262 - Multiple Reading
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
  char a[52];
  int x,i,j;
  while(scanf("%s",a)!=EOF){
    scanf("%d",&x);
    int sum=0,cycle=0;
    for(i=0;i<strlen(a);i++){
      if(a[i]=='W'){
        if(cycle!=0){
          sum++;
        }
        cycle=0;

        sum++;
      }else if(a[i]=='R'){
        cycle++;
        if(cycle==x){
          sum++;
          cycle=0;
        }
      }
    }
    if(cycle!=0){
      sum++;
    }
    printf("%d\n",sum);
  }
	return 0;
}

