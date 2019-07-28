//https://www.codechef.com/MAY19B/problems/WTBTR

#include<bits/stdc++.h>
#define ll long long int
#define PI 3.14159265
using namespace std;

int main() {
// #ifdef DEBUG
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	int t,n;
	cin >> t;
	ll min, temp;
	
	while(t--)
	{
		min = INT_MAX;
		cin >> n;

		//vector<ll> x(n);
		//vector<ll> y(n);
		ll x[n], y[n];


		for (int i = 0; i < n; ++i)
		{
			cin >> x[i] >> y[i];
		}



		for (int i = 0; i < n - 1; ++i)
		{
			for (int j = i + 1; j < n; ++j)
			{
				temp = abs( abs(x[i] - x[j]) - abs(y[i] - y[j]));
				if(temp < min)
					min = temp;
				if(min == 0)
					break;
			}
			if(min == 0)
				break;
		}

		/*res = min/2;
			cout << res;*/
		if(!(min & 1))
	    	cout << (min >> 1) << ".0000000\n";
		else
		    cout << (min >> 1) << ".5000000\n";
		    

	}

	return 0;
}