//https://codeforces.com/contest/1195/problem/A

#include<bits/stdc++.h>

#define ll long long int

#define ff first
#define ss second

using namespace std;

typedef pair<int,int> pii;


int main() {
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);


   int n, k;
	cin >> n >> k;
	map<int, int> freq;
	for (int i = 0; i < n; ++i) {
		int num;
		cin >> num;
		freq[num]++;
	}
	int cnt = 0;
	int ans = 0;
	for (pii p : freq) {
        //cout << "value of map = " << p.ss;
		cnt += p.ss % 2;
		ans += p.ss / 2 * 2;

       // cout  << " cnt = " << cnt << " | ans = " << ans << endl; 
	}

    
	ans += (cnt + 1) / 2;
	cout << ans << "\n";


    

	return 0;
}           