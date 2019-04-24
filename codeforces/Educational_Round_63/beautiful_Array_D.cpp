//https://codeforces.com/contest/1155/problem/D
//Not Correct
#include<bits/stdc++.h>
#define ll long long int
#define llu long long unsigned int
using namespace std;

int main(int argc, char const *argv[])
{
	ll n, x;
	llu res;

	cin >> n >> x;
	std::vector<ll> v(n);
	std::vector<ll> cum(n);
	ll maxi, mini;
	// if(x > 0)
	// {
		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];

			if(i == 0)
				{
					if(v[i]*x < 0)
						cum[i] = 0;
					else
						cum[i] = v[i]*x;

					maxi = cum[i];

				}
			else
			{
				cum[i] = max(cum[i-1] + (v[i]*x), v[i]*x);
				maxi = max(maxi, cum[i]);
			}
		}

		
	/*}
	else
	{
		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];

			if(i == 0)
			{
				if(v[i] > 0)
					cum[i] = 0;
				else
					cum[i] = v[i];

				mini = cum[i];
			}
			else
			{
				cum[i] = min(cum[i-1] + v[i], v[i]);
				mini = min(mini, cum[i]);
			}
		}

		res = mini * x;
	}*/

	cout << res;
	
	return 0;
}