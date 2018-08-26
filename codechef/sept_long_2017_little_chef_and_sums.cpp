#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int ele;

	while(t--)
	{
		int n;
		scanf("%d",&n);
		std::vector<int> v;
		std::vector<int> sum;

		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&ele);
			v.push_back(ele);
			if(i == 0)
				sum.push_back(ele);
			else
				sum.push_back(ele + sum[i-1]);


		}

		long long int min = sum[0] + sum[n-1];
		long long int tot = min;
		int index = 1;
		for(int i = 1; i < n ; i++)
		{
			tot = 0;
			tot = sum[i];
			tot += (sum[n-1] - sum[i-1]);

			if(tot < min)
				{
					min = tot;
					index = i+1;
				}
		}

		printf("%d\n",index);
	}
	return 0;
}