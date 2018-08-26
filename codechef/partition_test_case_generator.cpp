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
		long long int x,n;

		cin>>x>>n;

		
				

				long long int sum = (n*(n+1))/2;
				long long int temp,sum2 = 0;
				//int skip = x;
						
				//long long int special,count = 0;
				
					temp = (sum - (long long int)x);
					if(temp % 2 != 0)
						cout<<"impossible\n";
					else
						cout<<temp/2<<endl;

	}


	return 0;

}