#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,p;

		scanf("%d %d",&n,&p);
		int count = 0;
		//std::vector<char> v;


		if(p == 1 || p == 2)
			printf("impossible\n");
		else
		{
			if(p % 2 == 1)
			{
				for(int j = 0 ; j < n/p; j++)
				{
					for (int i = 0; i < p/2; ++i)
					{
						printf("a");
					}
					printf("b");
					for (int i = 0; i < p/2; ++i)
					{
						printf("a");
					}
				}
				printf("\n");
			}
			else
			{
				for(int j = 0 ; j < n/p; j++)
				{
					for (int i = 0; i < (p/2)-1; ++i)
					{
						printf("a");
					}
					printf("bb");
					for (int i = 0; i < (p/2)-1; ++i)
					{
						printf("a");
					}
				}
				printf("\n");
			}	
			
		}
	}
	return 0;
}