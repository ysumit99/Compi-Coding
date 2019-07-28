//http://codeforces.com/contest/1065/problem/B
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,m;

	cin >> n >> m;

	if(m == 0)
		cout << n << " " << n;
	else
		cout << n - (2*m) << " " << n-m-1 ;
	return 0;
}