//https://projecteuler.net/problem=1
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	int sum = 0;

	for (int i = 1; i < 1000; ++i)
	{
		if(i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	cout << sum;

	return 0;
}