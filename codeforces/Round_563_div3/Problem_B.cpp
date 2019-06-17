//https://codeforces.com/contest/1176/problem/B
//https://codeforces.com/contest/1176/problem/A

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



	int t;

	cin >> t;

	int n;
	ll sum, max;

	while(t--)
	{
		cin >> n;

		std::vector<int> v(n);
		int count_multiple_3 = 0; 

		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
			if(v[i] % 3 == 0)
				count_multiple_3++;
		}

		int count = 0;
		max = 0;

		for (int i = 0; i < n; ++i)
		{
			count = 0;
			
			if(v[i] % 3 == 0)
				{
					cout << "for i =  " << i << " | v[i] already counted " << endl;
					continue;

				}
			sum = v[i];
			for (int j = 0; j < n; ++j)
			{
				if(i == j)
					{
						cout << "Comparing Same Value | i = " << i << " | j = " << j << endl;
						continue;

					}
				if(v[j] % 3 == 0)
					{
						cout << "v[j] already counted | i = " << i << " | j = " << j << endl;
						continue;

					}
				if((sum + v[j]) % 3 == 0 )
				{
					sum += v[j];
					count++;
					cout << "sum = " << sum << " | count = " << count << " | i = " << i << " | j = " << j << endl;
					
				}
				else
					cout << "sum not multiple of 3" << "i = " << i << " | j = " << j << endl;
			}

			if(count > max)
				max = count;
			cout << "for  i = " << i <<  " => count = " << count << " | max = " << max << endl;
		}

		cout << "***** count_multiple_3 = " << count_multiple_3 << " max = " << max << endl;



	}	

	return 0;
}