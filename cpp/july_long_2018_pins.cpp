#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t,n;
	cin>>t;

	while(t--)
	{
		scanf("%d",&n);
		

		printf("1 1");
		for (int i = 0; i < n/2; ++i)
		{
			printf("0");
		}
		printf("\n");
	}
	return 0;
}