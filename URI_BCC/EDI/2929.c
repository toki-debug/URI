//URI -2929 
//Arissa Yoshida

#include <stdlib.h>
#include <stdio.h>

typedef struct reg * no;
struct reg{
  long long int info;
  struct reg *prox;
};

void cria_lista(no *lista){
  *lista = NULL;
}

void push(no *lista, long long int info){
  no p = (no)malloc(sizeof(struct reg));
  p->info = info;
  p->prox = *lista;
  *lista = p;
}


int minimo(no lista){
  no p = lista;
  long long int minim;
  long long int n;
  int k=0;
  if(lista == NULL){
    return -1;
  }else{
  while(p){

    n = p->info;
    p = p->prox;
    if(k==0){
      minim =n;
    }else{
      if(minim>n){
        minim =n;
      }
    }
    k++;
  }
  return minim;
}
}

int pop(no *lista){
  if(*lista == NULL){
    printf("EMPTY\n");
    return 0;
  }
  no p = *lista;
  *lista= (*lista)->prox;
  free(p);
  return 1;
}



int main(){
  int num;
  no p;
  no lista;
  long long int r=0;
  cria_lista(&lista);
  scanf("%d",&num);
  int i=0;
  char word[10];
  for(i=0;i<num;i++){
    scanf(" %s",word);
    if(word[0]=='P' && word[1]=='U'){
        long long int a;
        scanf("%lld",&a);
        push(&lista,a);
    }else if(word[0]=='P' && word[1]=='O'){

      pop(&lista);
    }else{
      r = minimo(lista);
      if(r==-1){
        printf("EMPTY\n");
      }else{
          printf("%lld\n",r);
      }

    }
  }


  return 0;
}

