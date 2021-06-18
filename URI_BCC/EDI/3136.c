//URI -3136 - Stack Architecture
//Arissa Yoshida 19/04/2021

#include <stdlib.h>
#include <stdio.h>

typedef struct reg * no;
struct reg{
  long long int info;
  struct reg *prox;
};

long long int rr[250];

void cria_lista(no *lista){
  *lista = NULL;
}

void push(no *lista, long long int info){
  no p = (no)malloc(sizeof(struct reg));
  p->info = info;
  p->prox = *lista;
  *lista = p;
}


  void mostra(no lista){
    no p = lista;
    int k=1;
    while(k--){
      printf("%lld\n",p->info);
      p = p->prox;
    }
    getchar();
  }

long long int conta(no lista,char c){
  no p = lista;
  long long int n;
  long long int r;

  int k=2;

    if(c=='a'){
      r=0;
      while(k--){
    n = p->info;
    p = p->prox;
    r+=n;
    }

    }else if(c=='s'){
      r=0;
      while(k--){
        n = p->info;
        p = p->prox;
        r=(n-r);

      }

    }else if(c=='d'){
      r=1;
      long long int a,b;

      while(k--){

        n = p->info;
        p = p->prox;
        if(k==1){
          a=n;
        }else{
          b=n;
        }
      }
      r = b/a;

    }else if(c=='m'){
      r=1;
        while(k--){
          n = p->info;
          p = p->prox;
          r*=n;
        }

    }

    return r;
}




int pop(no *lista,long int num){
  if(*lista == NULL){
    return 0;
  }

  no p = *lista;
  if(num!=0){
    rr[num] = p->info;
  }
  *lista= (*lista)->prox;

  free(p);
  return 1;
}



int main(){
  long long int num;
  no lista;
  long long int r=0;
  int z;
  for(z=0;z<200;z++){
    rr[z]=0;
  }
  cria_lista(&lista);
  scanf("%lld",&num);
  getchar();
  long long int i=0;
  char word[50];
  for(i=0;i<num;i++){
    scanf("%s",word);
    if(word[0]=='p' && word[1]=='u'){
      long long int a=0;
      long long int j;
      for (j = 0; word[j] != '\0'; ++j){
        if(!(word[j]=='_' || word[j]>='A')){
        a = a * 10 + word[j] - '0';
        }
      }

      if(word[5]=='R'){
        push(&lista,rr[a+1]);
      }else{
          push(&lista,a);
      }

    }
    else if(word[0]=='p' && word[1]=='o'){
      long long int a =0;
      int j=0;
      for (j = 0; word[j] != '\0'; ++j){
        if(!(word[j]=='_' || word[j]>='A')){
        a = a * 10 + word[j] - '0';
        }
      }
        pop(&lista,a+1);





    }else if(word[0]=='p'){
    mostra(lista);
    pop(&lista,0);
    }else{
      r = conta(lista,word[0]);
      pop(&lista,0);
      pop(&lista,0);
          push(&lista,r);






    }
  }



  return 0;
}

