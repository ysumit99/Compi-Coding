//https://codeforces.com/contest/1162/problem/0
#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main() {
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	int n,h,m;
	int li,ri,xi;

	cin >> n >> h >> m;
	int profit = 0, ele;
	int restriction[n];

	for (int i = 0; i < n; ++i)
	{
		restriction[i] = h;
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> li >> ri >> xi;

		
		
		
		for (int j = li - 1 ; j <= ri - 1 ; ++j)
		{
			restriction[j] = min(restriction[j], xi);
		}

	}

	for(int j = 0; j < n; j++)
		profit += restriction[j]*restriction[j];
	cout << profit;
	return 0;
}



