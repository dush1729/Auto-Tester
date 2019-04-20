#include "bits/stdc++.h"
using namespace std;
const int MAX = 3;
int main()
{
	srand(time(NULL));
	int l = rand() % MAX + 1;
	int r = rand() % MAX + 1;
	if(l > r) swap(l, r);
	cout << l << " " << r;
}