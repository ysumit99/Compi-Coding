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
		int n,k,s;
		int total,days,sun = 0;

		cin>>n>>k>>s;
		sun = s / 7;

		if((s - sun)*n < (k * s))
			cout<<"-1\n";
		else
		{
			
			days = (k * s)/n;
			if((k * s)%n > 0)
				days++;
			cout<<days<<"\n";

			


		}
		

	}
	return 0;
}