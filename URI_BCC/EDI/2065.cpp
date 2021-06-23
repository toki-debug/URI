//URI - 2065 
//Arissa Yoshida
#include <bits/stdc++.h>
using namespace std;
#define MAXN  99999999
int main()
{
    int n,m;
    cin >> n >> m;
    int a;
    vector<int>cashier;
    queue<int>client;
    int c = n;
    while(c--){
        cin >> a;
        cashier.push_back(a);
    }
     while(m--){
        cin >> a;
        client.push(a);
    }
    
    long int soma=0;
    vector<long int> vet(n+1,0);
    vector<long int >z(n+1,-MAXN);
    long int maxi = 0;
    long int minimo = MAXN;
    while(!client.empty()){
        for(int i=0;i<n;i++){ 
            if(vet[i]==0 && (!client.empty())){
            vet[i]=(cashier[i]*client.front());
       
            z[i]=-vet[i];
            client.pop();
            }else{
                z[i] = -vet[i];
               
            }
        }
      
        make_heap(z.begin(), z.end());
        soma+=(z.front()*-1);
 
        for(int i=0;i<n;i++){  
            vet[i]-=(z.front()*-1);
        }
    }
     for(int i=0;i<n;i++){     
            if(vet[i]!=0){
                maxi =  max((vet[i]),maxi);
            }
    }

    soma+=maxi;
    cout << soma << endl;

  return 0;
}
