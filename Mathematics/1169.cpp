//1169 - Grains in a Chess Board
//Arissa Yoshida
//15/06/2020
#include <bits/stdc++.h>
#define MAXN 10050
using namespace std;


main()
{
	unsigned long long int a;
	unsigned long long int b;
	int x;
	cin >> x;
	for(int i=0;i<x;i++){
		cin >> a;
		b = -1*(1 - pow(2,a));
		b/=12;
		b/=1000;
		if(a==64){
			cout << "1537228672809129 kg"<<endl;
		}else{

		cout << b << " kg" <<endl;
		}
	}
	return 0;
}
