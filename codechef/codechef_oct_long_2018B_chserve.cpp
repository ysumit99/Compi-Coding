//https://www.codechef.com/OCT18B/problems/CHSERVE

#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;

	cin >> t;
	long long int p1,p2,k,temp;

	while(t--)
	{
		cin >> p1 >> p2 >> k;

		temp = p1 + p2;
		temp /= k;

		if(temp % 2 == 0)
			cout << "CHEF" << endl;
		else
			cout << "COOK" << endl; 
	}


	return 0;
}