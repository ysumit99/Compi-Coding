#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,a,b;
    cin>>t;

    while(t--)
    {
    	cin>>n>>a>>b;
    	int min = 999999, sum = 0;

    	for (int i = 0; i <= n ; ++i)
    	{
    		sum = a*i*i + b*(n-i)*(n-i);
    		if(sum < min)
    			min = sum;
    	}

    	cout<<min<<"\n";
    }
	return 0;
}