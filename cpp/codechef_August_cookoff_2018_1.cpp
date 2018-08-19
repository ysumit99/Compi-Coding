
#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	
	int t;
	int n,k,ele;
	ll int sum_e, sum_o;

	cin>>t;

	while(t--)
	{
		sum_e = 0, sum_o = 0;

		cin>>n>>k;

		for (int i = 0; i < n; ++i)
		{
			cin>>ele;

			if(i % 2 == 0)
				sum_e += ele;
			else
				sum_o += ele;

		}

		if(abs(sum_e - sum_o) >= k)
			cout<<"1"<<endl;
		else
			cout<<"2"<<endl;

	}	

	return 0;
}