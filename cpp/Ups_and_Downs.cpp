//https://www.codechef.com/problems/ANUUND 
//Easy
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		long int n,ele;
		std::vector<long int> v;
		scanf("%ld",&n);

		for (int i = 0; i < n; ++i)
		{
			scanf("%ld",&ele);
			v.push_back(ele);
		}
		sort(v.begin(),v.end());

		if(n == 1)
			printf("%ld\n",v[0]);
		else
		{
			for (int i = 1; i < n; i+=2)
			{
				if(i+1 < n)
					swap(v[i],v[i+1]);	
			}

			//printing desired output
			for (int i = 0; i < n; i++)
			{
				printf("%ld ",v[i]);
			}
			printf("\n");
		}

	}
	return 0;
}