//https://www.codechef.com/LOCJUN17/problems/HHMGN
#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		long long int n,s,ele;
		scanf("%lld %lld",&n,&s);

		std::vector<long long int> v;
		std::vector<long long int> cum;

		for (int i = 0; i < n; ++i)
		{
			scanf("%lld",&ele);
			v.push_back(ele);
			

		}
		/*for (int i = 0; i < n; ++i)
		{
			cout<<v[i]<<"\t";

		}
		cout<<endl;*/

		sort(v.begin(),v.end());
		for (int i = 0; i < n; ++i)
		{
			if(i == 0)
				cum.push_back(v[0]);
			else
				cum.push_back(v[i] + cum[i-1]);
		}
		//cout<<cum[0]<<"\t"<<cum[1]<<"\t"<<cum[2]<<"\t"<<cum[3]<<"\t"<<cum[4]<<endl;

		long long int flag = -1;
		long long int sum = 0;

		for (int i = 0; i < n; ++i)
		{
			long long int sum = 0;
			if(i==0)
			{
				sum = n*cum[0];
				if(sum == s)
				{
					flag = cum[0];
					break;

				}
			}
			else
			{
				sum = ((n-i)*v[i] + cum[i-1]);
				if(sum == s)
				{
					flag = v[i];
					break;

				}
			}

		}
		printf("%lld\n",flag);
		
	}
	return 0;
}