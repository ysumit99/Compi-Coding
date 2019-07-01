//http://codeforces.com/contest/1187/problem/A
//Accepted

#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifdef DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base ::sync_with_stdio(false);
    cin.tie(0);

    int tc;

    cin >> tc;

    while (tc--)
    {
        int n, s, t, res;

        cin >> n >> s >> t;

        res = n - min(s, t) + 1;

        cout << res << "\n";
    }
    return 0;
}