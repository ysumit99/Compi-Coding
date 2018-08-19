//https://www.hackerrank.com/contests/moodys-analytics-2018-university-codesprint/challenges/meeting-profit-target
#include<bits/stdc++.h>
#define ll long long

using namespace std;


int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q, n;
    ll int actual, estimated, carry_forward;

    cin>>q;

    while(q--)
    {
    	
    	cin>>n;
    	
    	carry_forward = 0;

    	for (int i = 0; i < n; ++i)
    	{
    		cin>>actual;

    		cin>>estimated;

    		if(actual < estimated + carry_forward)
    			carry_forward = estimated + carry_forward  - actual;
    		else
    			carry_forward  = 0;

    		if(i == n-1)
    			if(carry_forward > 0)
    				cout << "1" <<endl;
    			else
    				cout<< "0" <<endl;


    	}
    	

    	


    }


	return 0;
}