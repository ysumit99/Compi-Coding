#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	//int t;
	//cin>>t;
	//while(t--)
	
		int n;
		cin>>n;

		std::vector<long long int> v;

		long long int ele,x,y;
		for (int i = 0; i < n; ++i)
		{
			cin>>ele;
			v.push_back(ele);
		}
		int q;
		cin>>q;

		int count = 0;
		for (int i = 0; i < q; ++i)
		{
			count = 0;
			cin>>x>>y;
			for (int j = 0; j < v.size() ; ++j)
			{
				if(((j & x) == j) && v[j] > 0)
					{
						v[j] -= y;
						
					}
					//cout<<"v["<<j<<"] = "<<v[j]<<" for query "<<i+1<<endl;
					if(v[j] > 0)
							count++;
			}
			cout<<count<<endl;
		}

	


	return 0;
}