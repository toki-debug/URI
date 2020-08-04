//1984 - The Pronalância Puzzle    
//Arissa Yoshida
#include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    int main() {
        char c[25],x;
        scanf("%s",c);
        int i,tam = strlen(c),j;
         for(i=tam-1;i>=0;i--){
            printf("%c",c[i]);    
        }
        printf("\n");
      /*  for(i=0, j=tam-1; i < tam/2; i++, j--)
        {
        x = c[i];
        c[i]=c[j];
        c[j]=x;
    }*/
       
       return 0;
    }
