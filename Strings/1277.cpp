//1277 - Short Attendance
//Arissa Yoshida
//15/06/2020
#include <bits/stdc++.h>
#define MAXN 10050
using namespace std;


main()
{
	int x;
	cin >> x;
	vector<string>str;
	vector<int>vet;
	for(int i=0;i<x;i++){
		int a;
		cin >> a;
		string s;
		for(int i=0;i<a;i++){
			cin >> s;
			str.push_back(s);
		}
		getchar();
		char c;
		int p=0;
		int t=0;
		double val;
		int count =0;
		for(int i=0;i<a;i++){
			t=0;p=0;
			
			while(c=getchar()){
			
			if(c!=' '&&c!='\n'){
				t++;
				if(c=='P'){
					p++;
				}else if(c=='M'){
					t--;
				}
			}else{
				break;
			}
			}
			val =(double) p/(double)t;
			
			if(val<0.75){
				if(count ==0){
					cout << str[i];
					count ++;
				}else{
				cout<<" "<< str[i];
				}
			}
		}
		str.erase(str.begin(),str.end());
		cout << endl;

	}
	return 0;
}
