//http://codeforces.com/contest/1139/problem/A
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, res = 0;

	cin >> n;

	string str;

	cin >> str;

	for (int i = 0; i < n; ++i)
	{
		/* code */

		if((str[i] - '0') % 2 == 0)
		{
			res += str[i];
		} 
	}

	cout << res;


	return 0;
}