//https://www.codechef.com/DEC20B/problems/EVENPSUM
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

    int t;

    cin >> t;

    while (t--)
    {
        long int a, b;

        cin >> a >> b;

        if (a % 2 == 0)
        {
            cout << a / 2 * b << endl;
        }
        else if (b % 2 == 0)
        {
            cout << b / 2 * a << endl;
        }
        else
        {
            cout << ((a / 2) * (b / 2)) + ((a / 2) + (a % 2)) * ((b / 2) + (b % 2)) << endl;
        }
    }

    return 0;
}