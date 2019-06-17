//https://codeforces.com/contest/1176/problem/A

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

	int q;
	ll n, temp;

	cin >> q;

	while(q--)
	{
		cin >> n;


		temp = n;

		int flag = 0;
		ll count = 0;
		while(temp > 1)
		{
			if(temp % 2 == 0)
				temp = temp/2;
			else if(temp % 3 == 0)
				temp = 2*temp/3;
			else if(temp % 5 == 0)
				temp = 4*temp/5;
			else
				{
					flag = 1;
					break;
				}
			count++;
		}

		if(flag == 1)
			cout << "-1\n";
		else
			cout << count << "\n";
	}


	return 0;
}