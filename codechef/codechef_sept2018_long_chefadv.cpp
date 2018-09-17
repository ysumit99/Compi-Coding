//https://www.codechef.com/SEPT18B/problems/CHEFADV

#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;

	cin >> t;

	long long int n,m,x,y;


	while(t--)
	{

		cin >> n >> m >> x >> y;

		if((n == 1 && m == 1) || (n == 2 && m == 2))
			cout << "Chefirnemo" << endl;
		else if(((n-1) % x == 0 && (m-1) % y == 0) || ((n-1) % x == 1 && (m-1) % y == 1))
			cout << "Chefirnemo" << endl;
		else
			cout << "Pofik" << endl;
	}


	return 0;
}