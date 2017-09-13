#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		scanf("%d",&n);

		if(n%2 == 0)
		{
			for (int i = 1; i <= n; ++i)
			{
				if(i%2 == 1)
					printf("%d ",i+1);
				else
					printf("%d ",i-1);
			}
			printf("\n");
		}
		else
		{
			if(n == 2)
				printf("2 1\n");
			else if(n == 3)
				printf("2 3 1\n");
			else
			{
				for (int i = 1; i <= n-3 ; ++i)
				{
					if(i%2 == 1)
					printf("%d ",i+1);
				else
					printf("%d ",i-1);
				}
				printf("%d %d %d\n",n-1,n,n-2);

			}
		}
	}
	return 0;
}