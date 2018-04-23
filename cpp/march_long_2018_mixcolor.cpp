#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;

	cin>>t;

	while(t--)
	{
		int n;

		cin>>n;

		std::vector<long int> v(n);

		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}

		sort(v.begin(),v.end());
		int unique_count = 0;


		long int prev = v[0];
		unique_count++;

		for (int i = 1; i < n; ++i)
		{
			if(prev != v[i])
				unique_count++;
			prev = v[i];
		}

		cout<< n - unique_count<<"\n";

	}
	return 0;
}