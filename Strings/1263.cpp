//1263 - Alliteration
//Arissa Yoshida
//11/06/2020
#include <bits/stdc++.h>
#define MAXN 200
using namespace std;

main(){
	string a,aux;
	char k[MAXN];
	while(getline(cin,a)){
		istringstream str(a);
		int x=0;
		while(!str.eof()){
			str >> aux;
			x++;
			if(aux[0]>=65 && aux[0]<=91){
				aux[0]+=32;
			}
			k[x] = aux[0];
			//Deixa todos os numeros minusculos
		}
		int sum=0;
		int r=0;
		for(int i=1;i<x;i++){
			if(k[i]==k[i+1]){
				sum=1;
			}else if(sum==1){
				r+=1;	
				sum=0;
			}
			if(sum==1 && i==x-1){
				r++;
			}
		}
		cout << r << endl;
		x =0;
	}
	return 0;
}
