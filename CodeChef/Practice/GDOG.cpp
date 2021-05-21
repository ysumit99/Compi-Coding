//https://www.codechef.com/problems/GDOG
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

#ifdef DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base ::sync_with_stdio(false);
    cin.tie(0);

    int t, n, k;

    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        int max = INT_MIN, temp;
        for (int i = 1; i <= k; i++)
        {
            temp = n - (n / i) * i;

            if (temp > max)
            {
                max = temp;
            }
        }
        cout << max << endl;
    }

    return 0;
}