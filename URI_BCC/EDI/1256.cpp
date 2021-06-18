//URI - 1256
//Arissa Yoshida

#include <bits/stdc++.h>
using namespace std;

#define MAXN 10005


int main() {
    int t,n,a,b;
    int c=0;
    cin >> t;
    c = t;
    while(t--){
        if(c-1!=t){
            cout << endl;
        }
        cin >> b >> n;
        queue<int>vet[b+1];
       
        for(int i=0;i<n;i++){
            cin >> a;
            vet[a%b].push(a);
        }

        for(int i=0;i<b;i++){
        printf("%d -> ",i);
         
           while(!vet[i].empty()){
                cout << vet[i].front() << " -> ";
                vet[i].pop();
           } 
        cout << "\\" << endl;
        
    }
    }
   return 0;

}
