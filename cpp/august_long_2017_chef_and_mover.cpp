#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;

	cin>>t;

	long int n,d,ele;

	while(t--)
	{

		scanf("%ld %ld",&n,&d);

		std::vector<long int> v;

		for (int i = 0; i < n; ++i)
		{
			scanf("%ld",&ele);
			v.push_back(ele);
		}

		

		long int sum, flag = 0, result = 0;

		sum = std::accumulate(v.begin(), v.end(), 0);
		////cout<<"Sum = "<<sum<<endl;

		long int val = sum/n;

		if(sum % n != 0)
			printf("-1\n");
		else
		{
			int flag = 0;
			long int sum1 = 0, sum2 = 0,count1 = 0, count2 = 0; 

			if(d!=1)
			{
				for (int i = 0; i < n; i+=d)
				{
					sum1+=v[i];
					count1++;
				}
				//cout<<"sum1 = "<<sum1<<endl;

				if(sum1 != (count1 * val ))
					flag = 1;
				else
				{
					for (int i = 1; i < n; i+=d)
					{
						sum2+=v[i];
						count2++;
					}

					//cout<<"sum2 = "<<sum2<<endl;

					if(sum2 != (count2 * val ))
						flag = 1;
				}
			}
			else
			{
				for (int i = 0; i < n; ++i)
				{
					sum1+=v[i];
					count1++;
				}
				if(sum1 != (count1 * val ))
					flag = 1;
			}
			if(flag == 1)
				printf("-1\n");
			else
			{
				long int diff1 = 0, diff2 = 0;
				if(d!=1)
				{
					for (int i = 0; i < n; i+=d)
					{
						diff1 += abs(v[i] - val);
					}

					//cout<<"diff1 = "<<diff1<<endl;

					for (int i = 1; i < n; i+=d)
					{
						diff2 += abs(v[i] - val);
					}

					//cout<<"diff2 = "<<diff2<<endl;

					result = (diff1/2)  + (diff2/2);

				}
				else
				{
					for (int i = 0; i < n; i+=d)
					{
						diff1 += abs(v[i] - val);
					}
					result = (diff1/2) ;

				}
				printf("%ld\n",result);
			}
		}




	}
	return 0;
}