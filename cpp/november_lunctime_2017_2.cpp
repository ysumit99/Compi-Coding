#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;

	cin>>t;

	while(t--)
	{
		int n,q;
		long long int ele;
		cin>>n>>q;
		long long int type,left,right;
		 long long int sum,max;


		std::vector<long long int> v;

		for (int i = 0; i < n; ++i)
		{
			cin>>ele;
			v.push_back(ele);
		}

		for (int i = 0; i < q; ++i)
		{
			cin>>type>>left>>right;
			if(type == 2)
			{
				v[left-1] = right;
			}
			else
			{
				sum = 0;

				for (int j = left-1; j <= right - 1 ; ++j)
				{
					sum = (v[j] - v[left-1]) * (v[right - 1] - v[j]);
					if(j == left-1)
						max = sum;
					else
					{
						if(sum > max)
							max = sum;

					}

				}
				printf("%lld\n",max);
			}
		}
	}
	
	return 0;
}