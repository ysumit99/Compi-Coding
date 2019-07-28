//https://codeforces.com/contest/1189/problem/A
//Accepted
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

    int n;

    cin >> n;


    string str;

    cin >> str;

    int count_0 = 0, count_1 = 0;

    count_0 = count(str.begin(), str.end(), '0');
    count_1 = n - count_0;

    if(count_0 != count_1)
        cout << "1\n" << str;
    else
        cout << "2\n" << str.substr(0, n - 1) << " " << str[n-1];
	return 0;
}