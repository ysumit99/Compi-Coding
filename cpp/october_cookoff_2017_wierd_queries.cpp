#include <bits/stdc++.h>

using namespace std;
long long sum,y,remain;
int main(int argc, char const *argv[])
{
	int t;

	cin>>t;

	while(t--)
	{
		scanf("%lld",&y);

        sum = 0;
		for (int i = 1; i <=700 ; ++i)
		{
			remain = y - i;
			if(remain < 1)
				break;
			sum+=sqrt(remain);

		}
		printf("%lld\n",sum);
	}
	return 0;
}