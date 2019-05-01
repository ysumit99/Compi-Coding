//https://www.spoj.com/problems/PRIME1/
#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main() {
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	int t,not_prime = 0;
	ll m,n;

	cin >> t;

	while(t--)
	{
		cin >> m >> n;
		if(m == 1 && n == 1)
			{cout << "\n";continue;}
		if(m == 1)
			m++;
		if(n == 1)
			n++;

		for (ll i = m; i <= n ; ++i)
		{
			not_prime = 0;
			for (ll j = 2; (j * j ) <= i; ++j)
			{
				if(i % j == 0)
				{
					not_prime = 1;
					break;
				}
			}
			if(!not_prime)
				cout << i << "\n";
		}

		cout << "\n";
	}
	
	return 0;
}
