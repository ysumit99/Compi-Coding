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

		std::vector<int> v;
		int ele;

		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&ele);

			v.push_back(ele);
		}
		int count = 0;
		int max = 0;
		for (int i = 0; i < n - 1; ++i)
		{
			for (int j = i + 1; j < n ; ++j)
			{
				if(v[i] + v[j] > max)
				{
					count = 1;
					max = v[i] + v[j];
				}
				else if(v[i] + v[j] == max)
				{
					count++;
				}
			}
		}

		float result;

		int den;
		den = n*(n-1)/2;
		std::cout << std::setprecision(7);


		result = ((float)count/(float)den);
		cout<<result<<endl;



	}
	return 0;
}