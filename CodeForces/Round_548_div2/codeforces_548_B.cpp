//http://codeforces.com/contest/1139/problem/B
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	cin >> n;


	std::vector<long long int> v(n);


	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}


	long long int res = 0;

	for (int i = n - 1; i >= 0 ; --i)
	{
		if(v[i] <= 0)
			break;

		if(i == n - 1)
			{
				res += v[i];
				continue;
			}

		if(v[i] < v[i+1])
			{
				res += v[i];
			}
		else if(v[i] >= v[i+1])
		{
			res += v[i + 1] - 1;
			v[i] = v[i + 1] - 1;
		}

		if(v[i] <= 0)
			break;

	}

	cout << res;
	return 0;
}