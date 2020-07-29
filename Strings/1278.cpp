//1278 - Justifier II
//Arissa Yoshida
//10/06/2020
#include <bits/stdc++.h>
using namespace std;

main(){
	int x;
	vector<string>s;
	vector<int>n;
	vector<int>p;
	vector<int>soma;
	int test=0;
	while(1){
	cin >> x;
	if(x==0){
		break;
	}else{
		if(test!=0){
			printf("\n");
		}
		test++;
		string a;
		char c;
		int b=0;
		int k=0;
		int sum=0;
		int z=0;
		int m=0;
		getchar();
		for(int i=0;i<x;i++){
			soma.push_back(0);
			k=0;
			sum=0;
			z=0;
			
		while((c = getchar())){
			if(c=='\n'){
					z=1;
			}else if(c>=65 && c<=90){
			a+=c;
			sum++;	
			b=1;
			}
			if(b==1 && (c=='\n' || c==' ')){
				s.push_back(a);
				b=0;
				a="";
				k++;
				soma[i]=sum;		
			}

			if(z==1){
				break;
			}
		}

			n.push_back(k);
			soma[i]+=n[i];
			soma[i]-=1;
			m = max(m,soma[i]);
			
		}
		z =0;
		for(int i=0;i<x;i++){
			k=soma[i];
			while(k<m){
				printf(" ");
				k++;
			}
			for(int j=z;j<z+n[i];j++){
				cout << s[j];
				if(j!=(z+n[i])-1){
					printf(" ");
				}
			}
			z+=n[i];
			printf("\n");
		}
		

		soma.erase(soma.begin(),soma.end());
		s.erase(s.begin(),s.end());
		n.erase(n.begin(),n.end());
	}
	
	}
	
	
}
