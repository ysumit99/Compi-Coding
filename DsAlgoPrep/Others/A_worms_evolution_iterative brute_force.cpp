//https://codeforces.com/problemset/problem/31/A
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, ele, flag = -1;

	cin>>n;


	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < n; ++k)
			{
				if(i != j && j != k)
				{
					if(v[i] == v[j] + v[k])
					{
						flag = 1;
						printf("%d %d %d",i+1,j+1,k+1);
						break;
					}
				}
			}
			if(flag == 1)
				break;
		}
		if(flag == 1)
			break;
	}

	if(flag == -1)
		printf("-1");
	return 0;
}