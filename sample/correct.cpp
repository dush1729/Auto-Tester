#include "bits/stdc++.h"
using namespace std;

bool prime(int x)
{
	int divisors = 0;
	for(int i = 1; i <= x; i++)
		if(x % i == 0) divisors++;
	return divisors == 2;
}

int main()
{
	int l, r;
	cin >> l >> r;
	for(int i = l; i <= r; i++)
		if(prime(i))
			cout << i << endl;
}