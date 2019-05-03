//https://www.codechef.com/MAY19B/problems/REDONE

#include<bits/stdc++.h>
#define ll long long int
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
	ll n,res = 1;
	ll arr[1000002] = {0}; //factorial array
	arr[1] = 1;
	for(int i = 2; i <= 1000001; i++)
		{

			res *= i;

			if(res > 1000000007)
				res %= 1000000007;

			arr[i - 1] = res - 1;
		}

	while(t--)
	{
		
		cin >> n;
		cout << arr[n] << "\n";
	}

	return 0;
}