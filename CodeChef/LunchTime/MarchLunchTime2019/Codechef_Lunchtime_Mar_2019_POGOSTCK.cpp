#include<bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{

	ios_base :: sync_with_stdio(false);
	cin.tie (0); // faster i/o*/

	int t,n,k;
	long long int max;

	cin >> t;
	
	while(t--)
	{
		cin >> n >> k;
		max = -1000001;
		std::vector<long long int> v(n);
		std::vector<long long int> res(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
			if(v[i] > max)
				max = v[i];
			if(i-k < 0)
				res[i] = v[i];
			else
			{
				res[i] =  std::max(res[i-k] + v[i], v[i]);
				
			}
		}

		if(k > n - 1)
			cout << max << endl;
		else
		{
			max = -1000000;
			for (int i = n - 1 ; i >= 0 ; i--)
			{
				if(i + k <= n - 1)
					break;
				else
				{
					if(res[i] > max)
						max = res[i];
				}
			}
			cout << max;
		}
	}


	return 0;
}