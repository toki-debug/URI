#include <bits/stdc++.h>
using namespace std;

/*typedef struct no_arvore{
    string a;
    struct no_arvore *dir;
    struct no_arvore *esq;
}*def_arvore;

void inserir_arvore(def_arvore *arvore, string b){
    def_arvore p;
    if(*arvore!=NULL){
        if((*arvore)->a > b){
            inserir_arvore(&((*arvore)->esq), b);
        }else if((*arvore)->a < b){
            inserir_arvore(&((*arvore)->dir), b);        
        }
    }else{
        p = (def_arvore)malloc(sizeof(struct no_arvore));
        p->a = b;
        p->esq = NULL;
        p->dir = NULL;
        *arvore = p;
    }
   
}

void mostra_arvore(def_arvore arvore){
    if(arvore!=NULL){
        mostra_arvore(arvore->esq);
        cout  <<(arvore->a )<< endl;
        mostra_arvore(arvore->dir);
    }
}
*/
int main(){
    char word;
    //def_arvore arvore;
    //arvore =NULL;
    string a="";
   set<string>aqui;
   set<string>::iterator iter;

    while((scanf("%c",&word))!=EOF){
        if(word=='\n' || word ==' ' || (word<'A') || (word >'Z' && word<'a')){
            if(a!=""){
            aqui.insert(a);
            //cout << a << endl;
             a="";
            }
           
        }else if((word>='a' && word<='z')||(word>='A' && word <='Z')){
            if(word>='A' && word<='Z'){
                word+=32;
            }
            a+=word;
            
        }
    }
        for(iter = aqui.begin();iter!=aqui.end();++iter){
            cout << *iter << endl;
        }
    
    return 0;
}
