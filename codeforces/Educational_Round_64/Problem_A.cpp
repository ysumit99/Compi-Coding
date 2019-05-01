//https://codeforces.com/contest/1156/problem/A
//Incorrect
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	cin >> n;
	std::vector<int> v(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	int res = 0;
	for (int i = 1; i < n ; ++i)
	{
		if(v[i] == 2 && v[i-1] == 3)
		{
			cout << "Infinite";
			return 0;
		}

		else if(v[i] == 3 && v[i-1] == 2)
		{
			cout << "Infinite";
			return 0;
		}

		else
		{
			if((v[i] == 1 && v[i-1] ==  2) || (v[i] == 2 && v[i-1] ==  1))
				res += 3;
			else if((v[i] == 1 && v[i-1] ==  3) || (v[i] == 3 && v[i-1] ==  1))
				res += 4;
		}

	}

	cout << "Finite\n" << res;
	return 0;
}