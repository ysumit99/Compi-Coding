#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t,ele;

	cin>>t;

	while(t--)
	{
		int n,k;
		cin>>n>>k;

		std::vector<int> v;
		std::vector<int> cum_v;

		for (int i = 0; i < n; ++i)
		{
			/* code */

			cin>>ele;

			v.push_back(ele);

			if(i == 0)
				cum_v.push_back(ele);
			else
				cum_v.push_back(ele + cum_v[i-1]);
		}

		int max = 0,temp = 0;

		if(n >= k)
		{
			max = cum_v[k-1];

			for (int i = k; i < n; ++i)
			{
				temp = cum_v[i] - cum_v[i-k];

				if(temp > max)
					max = temp;



			}
		}
		else
			max = cum_v[n-1];

		printf("%d\n",max);

		

	}
	return 0;
}