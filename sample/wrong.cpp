#include "bits/stdc++.h"
using namespace std;

bool prime(int x)
{
	int root = sqrt(x);
	for(int i = 2; i <= root; i++)
		if(x % i == 0) return false;
	return true;
}

int main()
{
	int l, r;
	cin >> l >> r;
	for(int i = l; i <= r; i++)
		if(prime(i))
			cout << i << endl;
}