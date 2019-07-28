/*#include<bits/stdc++.h>*/

#include<iostream>
#include<vector>


using namespace std;

int main(int argc, char const *argv[])
{
	int n, max = 0, res = 0;

	cin >> n;


	std::vector<int> v(n + 1);

	for (int i = 1; i <= n; ++i)
	{
		cin >> v[i];
	}

	for (int i = 1; i <= n ; ++i)
	{
		if(v[i] > max)
			max = v[i];

		if(v[i] == max && i == v[i])
			res++;
	}

	cout << res;


	


	return 0;
}