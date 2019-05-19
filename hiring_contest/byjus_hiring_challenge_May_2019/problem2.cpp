

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

	int t, n, res;

	cin >> t;
	string a,b;

	while(t--)
	{
		cin >> n;
		cin >> a >> b;
		res = 0;


		int arr1[26] = {0}, arr2[26] = {0};

		for (int i = 0; i < n; ++i)
		{
			arr1[a[i] - 'a']++;
			arr2[b[i] - 'a']++;
		}

		for (int i = 0; i < 26 ; ++i)
		{
			res += min(arr1[i], arr2[i]);
		}

		cout << res << "\n";


	}

	return 0;
}