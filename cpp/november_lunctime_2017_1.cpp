#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin>>t;
	int n,q,flag;
	long long int ele,temp;
	long long int limit;



	while(t--)
	{
		flag = 0;
		limit = -1;
		
		//scanf("%d %d",&n,&q);
		cin>>n>>q;

		std::vector<long long int> v;
		//std::vector<long long int> v2;
		
		for (int i = 0; i < n; ++i)
		{
			cin>>ele;
			v.push_back(ele);
		}
		sort(v.rbegin(),v.rend());

		//int flag = 0;
		
		for (int i = 0; i < q; ++i)
		{
			//scanf("%lld",&ele);
			cin>>ele;
			temp = ele;
			

			if(i!=0 && ele <= limit && flag == 1)
				printf("0 ");
			else
			{
				for (int j = 0; j < n; ++j)
				{

					ele = ele/v[j];
					if(ele == 0)
						{
							flag = 1;
							if(temp < limit)
								limit = temp;
							break;
							
						} 
				}
				printf("%lld ",ele);
			}
		}
		printf("\n");



	}
	return 0;
}