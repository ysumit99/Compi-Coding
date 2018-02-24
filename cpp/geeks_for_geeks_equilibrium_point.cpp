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
		int n,ele;
		cin>>n;
		std::vector<int> v(n);
		std::vector<int> cum_sum(n);
		int equili = -1;

		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
			if(i == 0)
				cum_sum[i] = v[i];
			else
				cum_sum[i] = cum_sum[i-1] + v[i];
		}

		for (int i = 0; i < n; ++i)
		{
			/*if(i == 0)
			{
				if((cum_sum[n-1] - cum_sum[0]) == 0)
				{
					equili = 0;
					break;
				}

			}
			else
				{*/
					//if(i)
					if(((cum_sum[n-1] - cum_sum[i]) == (cum_sum[i-1])) && i!=0)
					{
						equili = i;
						break;
					}
				//}
		}
		cout<<equili+1<<"\n";


	}

	return 0;
}