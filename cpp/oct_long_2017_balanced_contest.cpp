#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;

	cin>>t;


	while(t--)
	{
		long long int n,p,ele;
		std::vector<long long int > v;
		scanf("%lld %lld",&n,&p);

		for (int i = 0; i < n; ++i)
		{
			scanf("%lld",&ele);
			v.push_back(ele);
		}
		sort(v.begin(),v.end());
		int flag = 0;
		if(n < 3)
			printf("no\n");
		else
		{

			if(v[n-1] < p/2)
				flag = 1;
			if(v[0] > p/10 || v[1] > p/10)
				flag = 1;
			if(v[n-2] > p/2)
				flag = 1;
			if(v[2] < p/10)
				flag = 1;
			if(flag == 1)
				printf("no\n");
			else
				printf("yes\n");

		}
	
		


	}
	return 0;
}