//https://www.codechef.com/MAY19B/problems/REDONE
//Brute Force 
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
	ll n,res;


	for(int i = 1; i <= 1000000; i++)
	{
		res = 1;
		n = i;

		n++;

		while(n > 1)
		{
			res *= n;

			if(res > 1000000007)
				res %= 1000000007;
			n--;
		}

		cout << "else if(n == " << i <<") { cout << " << res - 1 << "; }" << "\n";
	}

	return 0;
}