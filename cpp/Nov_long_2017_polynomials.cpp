#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;

	cin>>t;

	while(t--)
	{
		int ele,n,q,a0,a1,a2,a3,t;
		scanf("%d",&n);
		unsigned long long int sum ,min;

		int arr[n][4];


		for (int i = 0; i < n; ++i)
		{
			scanf("%d %d %d %d",&arr[i][0],&arr[i][1],&arr[i][2],&arr[i][3]);
		}
		scanf("%d",&q);

		for (int i = 0; i < q; ++i)
		{
			scanf("%d",&t);
			min = arr[0][0] + arr[0][1]*t + arr[0][2]*t*t + arr[0][3]*t*t*t;
			
			for (int j = 1; j < n; ++j)
			{
				//sum = 0;
				sum = arr[j][0] + arr[j][1]*t + arr[j][2]*t*t + arr[j][3]*t*t*t;
				if(sum < min)
					min = sum;
			}
			printf("%llu\n",min);
		}
	}
	return 0;
}