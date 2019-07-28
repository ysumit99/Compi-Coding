#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,k,ele;

		scanf("%d %d",&n,&k);

		std::vector<int> v;

		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&ele);
			v.push_back(ele);


		}

		sort(v.begin(),v.end());
		int prev;
		int flag = -1,flag2 = -1;

		if(k < v[0])
		{
			printf("%d\n",k);
		}
		else if( k == v[0])
		{
			
			if(n == 1)
			{
				printf("%d\n",v[0]+1);
			}
			else
			{
				prev = v[0];

				for (int i = 1; i < n; ++i)
				{
					if(v[i] - prev != 1)
					{
						if(v[i]!=prev)
						{
							flag = prev + 1;
							break;
						}
						
					}
					prev = v[i];
				}
				if(flag == -1)
					printf("%d\n",v[n-1]+1);
				else
					printf("%d\n",flag);

			}

			
		}
		else if(k > v[0])
		{
			if(n == 1)
				printf("%d\n",k+1);
			else
			{
				int remain = k - v[0],diff;
				flag = -1;
				//flag2 = 0;

				prev = v[0];
				for (int i = 1; i < n; ++i)
				{
					diff = v[i] - prev;
					if(diff - 1 <= remain && diff != 0)
						{
							remain -= (diff -1);
							if(remain == 0)
							{
								flag = i;
								break;
							}

						}
					else if(diff - 1> remain && diff != 0)
					{
						flag2 = prev + remain + 1;
						break;
					}
					


					prev = v[i];

				}
				if(flag2 != -1)
				{
					printf("%d\n",flag2);
				}
				else if(flag != -1)
				{
					if(flag == n-1)
						printf("%d\n",v[n-1]+1);
					else
					{
						prev = v[flag];
						int flag3 = -1;
						for (int i = flag + 1; i < n; ++i)
						{
							if(v[i] - prev != 1)
							{
								printf("%d\n",prev + 1);
								flag3 = 1;
								break;
							}
							prev = v[i];
						}
						if(flag3 == -1)
							printf("%d\n",v[n-1] + 1);


					}
				}
				else
				{
					printf("%d\n",v[n-1] + remain + 1);
				}
				



			}
		}

	}
	return 0;
}