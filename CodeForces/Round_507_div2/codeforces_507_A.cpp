//http://codeforces.com/contest/1040/problem/A
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, a, b;

	cin >> n >> a >> b;

	std::vector<int> v(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	int smaller;
	int cost = 0;


	a <= b ? smaller = a : smaller = b;

	if(n % 2 == 0)
	{
		for (int i = 0; i < n/2; ++i)
		{
			if(v[i] != v[n-1-i] && v[i] != 2 && v[n-1-i] != 2)
				{
					cout << "-1";
					return 0;

				}

			if(v[i] == 2 && v[n-1-i] == 2)
			{
				cost += 2*smaller;
			}
			else if(v[i] == 2)
			{
				if(v[n-1-i] == 0)
					cost += a;
				else
					cost += b;
			}
			else if(v[n-1-i] == 2)
			{
				if(v[i] == 0)
					cost += a;
				else
					cost += b;
			}
		}
	}
	else
	{
		for (int i = 0; i < n/2; ++i)
		{
			if(v[i] != v[n-1-i] && v[i] != 2 && v[n-1-i] != 2)
				{
					cout << "-1";
					return 0;

				}

			if(v[i] == 2 && v[n-1-i] == 2)
			{
				cost += 2*smaller;
			}
			else if(v[i] == 2)
			{
				if(v[n-1-i] == 0)
					cost += a;
				else
					cost += b;
			}
			else if(v[n-1-i] == 2)
			{
				if(v[i] == 0)
					cost += a;
				else
					cost += b;
			}
		}

		if(v[n/2] == 2)
			cost += smaller;
	}

	cout << cost;
	
	return 0;
}