//1221 - Fast Prime Number
//Arissa Yoshida
//11/06/2020
#include <bits/stdc++.h>
#define MAXN 200
using namespace std;
bool prime(unsigned long long int num)
{
	if (num == 2)
	{
		return true;
	}else if (num % 2 == 0 || num == 1){
		return false;
	}else{
		for (int i = 3; i <= sqrt(num); i += 2)
		{
			if (num % i == 0)
			{
				return false;
			}
		}

	}	
	
	return true;
}

main()
{
	unsigned long long int x;
	cin >> x;
	unsigned long long int num;
	for (int i = 0; i < x; i++)
	{
		cin >> num;
		if (prime(num))
		{
			printf("Prime\n");
		}
		else
		{
			printf("Not Prime\n");
		}
	}
	return 0;
}
