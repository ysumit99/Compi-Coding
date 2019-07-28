#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;

	cin>>t;

	long long int n,d,ele;

	while(t--)
	{

		scanf("%lld %lld",&n,&d);

		std::vector<long long int> v;

		for (int i = 0; i < n; ++i)
		{
			scanf("%lld",&ele);
			v.push_back(ele);
		}

		

		long long int sum, flag = 0, result = 0;

		sum = std::accumulate(v.begin(), v.end(), 0);
		////cout<<"Sum = "<<sum<<endl;

		long long int val = sum/n;

		if(sum % n != 0)
			printf("-1\n");
		else
		{
			//int flag = 0;
			long long int sum1 = 0 ,count1 = 0; 
			long long int diff1 = 0;

			
			
				for (int i = 0; i < d; ++i)
				{
					
					for (int j = i; j < n; j+=d)
					{
						sum1+=v[j];
						count1++;

						diff1 += abs(v[j] - val);
						
					}

					if(sum1 != (count1 * val ))
						{
							flag = 1;
							break;
						}
					else
						result += (diff1/2) ;
					sum1 = 0;
					count1 = 0;
					diff1 = 0;


				}
				
			
			if(flag == 1)
				printf("-1\n");
			else
			{
				
				printf("%lld\n",result);
			}
		}




	}
	return 0;
}