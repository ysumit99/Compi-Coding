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
		int a,b,c,d;
		cin>>a>>b>>c>>d;

		std::vector<int> v;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		v.push_back(d);

		std::sort(v.begin(), v.end());
		int flag = 0;

		for (int i = 0; i < v.size(); ++i)
		{
			if(v[0] != v[1])
				flag = 1;
			if(v[2] != v[3])
				flag = 1;
		}

		if(flag == 1)
			cout<<"NO"<<"\n";
		else
			cout<<"YES"<<"\n";

	}
	return 0;
}