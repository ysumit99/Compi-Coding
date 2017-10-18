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

		int flag = -1,flag2 = -1;

		if(k == 0)
		{

			for (int i = 0; i < n; ++i)
			{
				if(v[i]!=i)
				{
					flag = i;
					break;
				}
			}

			if(flag == -1)
				printf("%d\n",n);
			else
				printf("%d\n",flag);
		}
		else
		{
			if(n == 1)
			{
				if(v[0] == 0)
					printf("1\n");
				else
					printf("0\n");
			}
			else
			{
				int temp;


				for (int i = 0; i < n; ++i)
				{
					if(i == 0)
					{
						temp = k - v[0];

						if(temp < 0)
						{
							//printf("%d\n",temp-1);
							flag2 = temp-1;
							break;
						}
						else
						{
							k-= temp;
						}


					}
					else
					{
						temp = v[i] - v[i-1];
						if(k - (temp-1) >= 0)
							k-=(temp-1);
						else
						{
							flag2 = v[i-1] + k + 1;
							break;
						}
					}
				}
				if(flag2 == -1)
					printf("%d\n",n);
				else
					printf("%d\n",flag2);
			}
		}
	}
	return 0;
}