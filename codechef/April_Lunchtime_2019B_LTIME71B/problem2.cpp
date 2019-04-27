//https://www.codechef.com/LTIME71B/problems/FASTFOOD
//Accepted
#include<bits/stdc++.h>

using namespace std;

int main() {
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	int t;

	cin >> t;
	int n;

	long long int max = 0, sum = 0;
	while(t--)
		{
			max = 0; sum = 0;

			cin >> n;
			std::vector<long long int> a(n);
			std::vector<long long int> b(n);
			std::vector<long long int> cum_a(n);
			std::vector<long long int> cum_b(n);

			for (int i = 0; i < n; ++i)
			{
				cin >> a[i];
				if(i == 0)
					cum_a[i] = a[i];
				else
					cum_a[i] = cum_a[i-1] + a[i];
			}

			for (int i = 0; i < n; ++i)
			{
				cin >> b[i];
				if(i == 0)
					cum_b[i] = b[i];
				else
					cum_b[i] = cum_b[i-1] + b[i];
			
			}
			/*for (int i = 0; i < n ; ++i)
			{
				cout << "a[i] = " << cum_a[i] << endl;
			}

			for (int i = 0; i < n ; ++i)
			{
				cout << "b[i] = " << cum_b[i] << endl;
			}*/

			if(cum_a[n-1] >= cum_b[n-1])
				max = cum_a[n-1];
			else
				max = cum_b[n-1];

			//cout << "max = " << max << endl;
			for (int i = 0; i < n ; ++i)
			{

				sum = cum_a[i] + cum_b[n-1] - cum_b[i];
				if(sum > max)
					max = sum;
				//cout << "max = " << max << endl;
			}

			cout << max << "\n";
		}

	return 0;
}