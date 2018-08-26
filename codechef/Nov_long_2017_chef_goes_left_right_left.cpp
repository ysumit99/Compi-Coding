#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;

	cin>>t;

	while(t--)
	{
		int n,r;
		long long int ele,left,right;

		scanf("%d %d",&n,&r);

		std::vector<long long int> v1;

		std::vector<long long int> v2;

		for (int i = 0; i < n; ++i)
		{
			scanf("%lld",&ele);
			v1.push_back(ele);
			v2.push_back(ele);
		}

		sort(v2.begin(),v2.end());
		int flag = 0;////dir=0;//left = -1, right = 1 this shows //direction to go next



		if(n == 1)
			printf("YES\n");
		else
		{

			if(v1[0] > r)
				{
					//prev = v1[0];
					//dir = -1;
					right = v1[0];
					left = v2[0];


				}
			else if(v1[0] < r)
				{
					//prev = v1[0];
					//dir = 1;
					left = v1[0];
					right = v2[n-1];

				}


			if(v1[0] == r)
				printf("NO\n");
			else
			{
				for (int i = 1; i < n; ++i)
				{

					if(v1[i] < left ||  v1[i] > right)
					{
						flag = 1;
						break;
					}
					/*else if(//dir == 1 &&  v1[i] > right)
					{
						flag = 1;
						break;
					}*/
					//prev = v1[i];
					//if(v1[i] > //prev )

					if(v1[i] > r)
						{
							////dir = -1;
							right = v1[i];
						}
					else
						{
							////dir = 1;
							left = v1[i];
						}

				}
				if(flag == 1)
					printf("NO\n");
				else
					printf("YES\n");

			}
		}

		
		





	}
	return 0;
}