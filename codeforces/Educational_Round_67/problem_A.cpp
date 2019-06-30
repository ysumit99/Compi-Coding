//http://codeforces.com/contest/1187/problem/A

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

        int min_ele = min(s, t);
        int max_ele = max(s, t);

        if (min_ele == n)
            res = 1;
        else
        {
            res = max(min_ele, n - min_ele + 1);
        }
        cout << res << "\n";
    }
    return 0;
}