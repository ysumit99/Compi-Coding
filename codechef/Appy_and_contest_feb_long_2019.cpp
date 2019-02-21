//https://www.codechef.com/FEB19B/problems/HMAPPY2
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,a,b,k,count;
	cin >> t;

	while(t--)
	{
		cin >> n >> a >> b >> k;
		count = 0; 
		

		for (int i = 1; i < n; ++i)
		{
			if(i % a == 0 && i % b != 0)
				count++;
			else if(i % a != 0 && i % b == 0)
				count++;

		}

		if(count >= k)
			cout << "Win" << "\n";
		else
			cout << "Lose" << "\n";
	}
	return 0;
}