//1254 - Tag Replacement
//Arissa Yoshida
//19/07/2020
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 200

main()
{
    char word[100];
    char numb[10];
    char string[250];
    char string2[250];
    char final[300];
    char comp[100];
    int i, j, k, tam1;
    while (scanf("%s", word) != EOF)
    {
        strcpy(comp, word);
        tam1 = strlen(comp);
        for(i=0;i<tam1;i++){
            if(comp[i]>=65 && comp[i]<=90){
                comp[i]+=32;
            }
        }
        scanf("%s", numb);
        char c;
        getchar();
        int tam = 0;
        while ((c = getchar()) != '\n')
        {
            string[tam] = c;
            tam++;
        }
        strcpy(string2, string);
        for(i=0;i<tam;i++){
            if(string2[i]>=65 && string2[i]<=90){
                string2[i]+=32;
            }
        }
        int num=0;
        for (i = 0; i < tam; i++)
        {
            int conf = 1;
            if(string2[i]=='<'){
                num=1;
            }else if(string2[i]=='>'){
                num=0;
            }
            if(num==1){
            if (string2[i] == comp[0])
            {
                //printf("aqui");
                
                for (j = 1; j < tam1; j++)
                {
                    
                    if (comp[j] != string2[j + i])
                    {
                       
                        conf = 0;
                        break;
                    }
                }

                if (conf == 1)
                {
                    printf("%s", numb);
                    i += tam1 - 1;
                }
                else
                {
                    printf("%c", string[i]);
                }
            }
            else
            {
                printf("%c", string[i]);
            }
            }else{
                printf("%c", string[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
