#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;

	cin>>t;

	while(t--)
	{
		std::vector<int> v;

		int ele,n,k;
		scanf("%d %d",&n,&k);


		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&ele);
			v.push_back(ele);

		}
		sort(v.begin(),v.end());
		printf("%d\n",v[(n+k)/2]);
	}
	return 0;
}