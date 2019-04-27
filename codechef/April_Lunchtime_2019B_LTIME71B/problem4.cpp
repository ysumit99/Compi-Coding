//https://www.codechef.com/LTIME71B/problems/FAPF
//Incomplete
#include<bits/stdc++.h>

using namespace std;

int main() {
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	int t;

	cin >> t;
	int n,q;
	int x,y;

	
	while(t--)
		{	
			cin >> n >> q;
			std::vector<long long int> v(n+1);

			for (int i = 1; i <= n; ++i)
			{
				cin >> v[i];
			}

			for (int i = 0; i < q; ++i)
			{
				cin >> x >> y;




			}
			
		}

	return 0;
}