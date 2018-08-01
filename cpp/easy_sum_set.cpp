#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m, ele;

	int a[101] = {0}, b[101] = {0}, c[101] = {0};
	std::vector<int> v1;
	std::vector<int> v2;
	std::vector<int> v3;
	std::vector<int> v;

	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cin>>ele;
		a[ele] = 1;
		v1.push_back(ele);
	}

	cin>>m;

	for (int i = 0; i < m; ++i)
	{
		cin>>ele;
		c[ele] = 1;
		v3.push_back(ele);
	}

	sort(v1.begin(),v1.end());
	sort(v3.begin(),v3.begin());

	int max = v3[m-1] - v1[n-1];
	int flag = 0;

	for (int i = 1; i <= max; ++i)
	{
		flag = 0;
		for(int j = 0; j < n; j++)
		{
			if(c[v1[j] + i] != 1)
				{
					flag = 1;
					break;
				}
		}
		if(flag == 0)
			v.push_back(i);
	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}




	return 0;
}