//http://codeforces.com/problemset/problem/106/B
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	cin >> n;

	int v[n][4];

	int speed, ram, hdd, cost;

	for (int i = 0; i < n; ++i)
	{
		// cin >> speed >> ram >> hdd >> cost;
		cin >> v[i][0];
		cin >> v[i][1];
		cin >> v[i][2];
		cin >> v[i][3];


	}


	int res;
	int flag;
	int min = 9999;

	for (int i = 0; i < n; ++i)
	{
		flag = 0;

		if(v[i][3] > min)
			continue;

		for (int j = 0; j < n; ++j)
		{
			if(v[i][0] < v[j][0] && v[i][1] < v[j][1] &&  v[i][2] < v[j][2] && v[i][3] < v[j][3] )
				flag = 1;
		}

		if(flag == 1)
			continue;
		else
			if(v[i][3] < min)
				{
					min = v[i][3];
					res = i + 1;
				}
	}

	cout << res;


	return 0;
}